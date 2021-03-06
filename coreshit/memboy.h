
#ifndef MEMBOY_H
#define MEMBOY_H

#include <asmtypes.h>
#include <fstream>
#include <time.h>

#define YAY cout << __FILE__ << ':' << __LINE__ << ": Breakpoint passed yay :3" << endl;

#define P1 0xFF00
#define JOYP 0xFF00
#define SB 0xFF01
#define SC 0xFF02
#define DIV 0xFF04
#define TIMA 0xFF05
#define TMA 0xFF06
#define TAC 0xFF07
#define IF 0xFF0F
#define NR10 0xFF10
#define NR11 0xFF11
#define NR12 0xFF12
#define NR13 0xFF13
#define NR14 0xFF14
#define NR21 0xFF16
#define NR22 0xFF17
#define NR23 0xFF18
#define NR24 0xFF19
#define NR30 0xFF1A
#define NR31 0xFF1B
#define NR32 0xFF1C
#define NR33 0xFF1D
#define NR34 0xFF1E
#define NR41 0xFF20
#define NR42 0xFF21
#define NR43 0xFF22
#define NR44 0xFF23
#define NR50 0xFF24
#define NR51 0xFF25
#define NR52 0xFF26
#define KEY1 0xFF4D
#define VBK 0xFF4F // Switch bank 1 from 0x8000 to 0x9FFF
#define LCDC 0xFF40
#define STAT 0xFF41
#define SCY 0xFF42
#define SCX 0xFF43
#define LY 0xFF44
#define LYC 0xFF45
#define DMA 0xFF46
#define BGP 0xFF47
#define OBP0 0xFF48
#define OBP1 0xFF49
#define WY 0xFF4A
#define WX 0xFF4B
#define KEY1 0xFF4D
#define RBK 0xFF50
#define HDMA1 0xFF51
#define HDMA2 0xFF52
#define HDMA3 0xFF53
#define HDMA4 0xFF54
#define HDMA5 0xFF55
#define RP 0xFF56
#define BCPS 0xFF68
#define BCPD 0xFF69
#define OCPS 0xFF6A
#define OCPD 0xFF6B
#define SVBK 0xFF70 // Switch bank 1 to 7 from 0xD000 to 0xDFFF
#define PCM12 0xFF76
#define PCM34 0xFF77
#define IE 0xFFFF

#define REGS( n ) hram[n - 0xff00]

//#define OAM FE00~FE9F
//#define NR 0xFF10~FF26
//#define RAM 0xFF30~FF3F

#define MEMBOY_MAXSTACK 8
#define MEMREF_MAXSTACK 8

using namespace std;

union xword
{
	word w;
	struct
	{
		byte l;
		byte h;
	}
	b;
};

class memboy
{
	private:
		// Memory Maps
		byte *biosrombank; // 0000 - 0100
		byte *biosromxtend; // 0200 - 1000
		byte *rombank0; // 0000 - 3fff
		byte *rombank1ton; // 4000 - 7fff
		byte *vram; // 8000 - 9fff
		byte *cartram; // a000 - bfff
		byte *svbk0; // c000 - cfff
		byte *svbk1to7; // d000 - dfff
		byte *oam; // fe00 - fe9f
		byte *hram; // ff00 - ffff

		// MBC Selected Banks
		byte *currom;
		byte *curram;

		// MBC Switchable Accessers
		void ( memboy::*currom0set )( byte *addr, byte b );
		void ( memboy::*currom1set )( byte *addr, byte b );
		byte ( memboy::*currom1get )( byte *addr );
		void ( memboy::*curramset )( byte *addr, byte b );
		byte ( memboy::*curramget )( byte *addr );
		void ( memboy::*choramset )( byte *addr, byte b );
		byte ( memboy::*choramget )( byte *addr );

		// MBC 1 Vars
		byte rbkid;

		// MBC 3 vars
		void ( memboy::*choramset3 )( byte *addr, byte b );
		byte ( memboy::*choramget3 )( byte *addr );
		struct
		{
			struct
			{
				int sec;
				int min;
				int hour;
			}
			off;
			struct
			{
				int sec;
				int min;
				int hour;
			}
			latch;
			bool latched;
		}
		rtc;

		// MBC 5 Vars
		xword rombkid5;
		byte rambkid5;
		ofstream savefile;

		// Hardware Registers
		byte joyparrows;
		byte joypbuttons;
		byte cgbbgpalette[64];
		byte cgbsppalette[64];

		// Cartridge Specs
		bool cgb;
		bool battery;
		dword nrom;
		dword nram;

		// Locks
		bool dmalock;
		bool vramdmawrote;
		bool divwrote;

		class memref
		{
			friend class memboy;

			private:
				memboy *ref;
				byte *addr;
				void ( memboy::*setfunc )( byte *addr, byte b );
				byte ( memboy::*getfunc )( byte *addr );
			public:
				void set( byte b );
				byte get( void );
		};

		memref rblock[MEMREF_MAXSTACK];
		int rblockid;

		class mempassthru
		{
			friend class memboy;

			private:
				memboy *ref;
				word ptchosen;
			public:
				operator byte( void );
				operator word( void );
				operator int( void );
				explicit operator char( void );
				explicit operator bool( void );
				mempassthru &operator =( byte b );
				mempassthru &operator =( word w );
				mempassthru &operator =( int n );
				mempassthru &operator =( mempassthru &m );
				mempassthru &operator |=( byte n );
				mempassthru &operator |=( int n );
				mempassthru &operator &=( byte n );
				mempassthru &operator &=( int n );
				mempassthru &operator ++( int n );
				mempassthru &operator --( int n );
		};

		mempassthru block[MEMBOY_MAXSTACK];
		int blockid;

		// Standard memory accessers
		void classicset( byte *addr, byte b );
		byte classicget( byte *addr );

		// ROM memory accessers
		void romset( byte *addr, byte b );
		byte romget( byte *addr );
		byte rom0get( byte *addr );
		byte rom1get( byte *addr );

		// ROM MBC setters
		void mbc1set( byte *addr, byte b );
		void mbc2set( byte *addr, byte b );
		void mbc3set( byte *addr, byte b );
		void mbc5set( byte *addr, byte b );

		// RAM MBC accessers
		void mbc2rset( byte *addr, byte b );
		byte mbc2rget( byte *addr );
		void mbc3secset( byte *addr, byte b );
		byte mbc3secget( byte *addr );
		void mbc3minset( byte *addr, byte b );
		byte mbc3minget( byte *addr );
		void mbc3hourset( byte *addr, byte b );
		byte mbc3hourget( byte *addr );

		// P1/JOYP memory accessers
		void joypset( byte *addr, byte b );
		byte joypget( byte *addr );

		// Colors palettes memory accessers
		void bgpset( byte *addr, byte b );
		byte bgpget( byte *addr );
		void sppset( byte *addr, byte b );
		byte sppget( byte *addr );

		// Dead memory accessers
		void deadset( byte *addr, byte b );
		byte deadget( byte *addr );

		// DIV memory accessers
		void divset( byte *addr, byte b );

		// HDMA5 memory accessers
		void hdma5set( byte *addr, byte b );

		void startsave( const char *path );
		void dumpsave( void );
		memref *deref( word addr );
	public:
		struct header
		{
			byte start[4];
			byte logo[48];
			union
			{
				byte dmgtitle[16];
				struct
				{
					byte title[11];
					byte mcode[4];
					byte cgbflag;
				}
				cgb;
			}
			shared;
			word newlcode;
			byte sgbflag;
			byte carttype;
			byte romsize;
			byte ramsize;
			byte dcode;
			byte oldlcode;
			byte romver;
			byte headcheck;
			word globcheck;
		};

		// Constructor
		memboy( void );

		// Accessers
		mempassthru &operator []( word addr );
		byte &cbank0( word addr );
		byte &cbank1( word addr );
		byte &sysregs( word addr );
		byte *sppalette( byte id );
		byte *bgpalette( byte id );

		// Setters
		bool biosload( const char *path );
		bool romload( const char *path );
		void ramclear( void );

		void setarrowsstate( byte b );
		void setbuttonsstate( byte b );
		void dmaswitchon( void );
		void dmaswitchoff( void );

		// Getters
		byte getarrowsstate( void );
		byte getbuttonsstate( void );
		bool isdmalocked( void );
		bool hdma5writehappend( void );
		bool divwritehappend( void );
		bool iscgb( void );

		// Destructor
		~memboy( void );
};

#endif
