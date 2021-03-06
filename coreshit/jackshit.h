
#ifndef JACKSHIT_H
#define JACKSHIT_H

#include <memboy.h>
#include <asmtypes.h>
#include <iostream>
#include <colors.h>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <ascii.h>
#include <scf.h>

#define ZFLAG 0b10000000
#define NFLAG 0b01000000
#define HFLAG 0b00100000
#define CYFLAG 0b00010000

#define CARRYUPDATE( be, af ) \
	if ( be > af ) \
		regs.b.f |= CYFLAG; \
	else \
		regs.b.f &= ~CYFLAG; \
	if ( ( be & 0x0F ) > ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG;

#define CARRYUPDATEWITHCARRY( be, af ) \
	if ( be >= af ) \
		regs.b.f |= CYFLAG; \
	else \
		regs.b.f &= ~CYFLAG; \
	if ( ( be & 0x0F ) >= ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG;

#define CARRYREVUPDATE( be, af ) \
	if ( be < af ) \
		regs.b.f |= CYFLAG; \
	else \
		regs.b.f &= ~CYFLAG; \
	if ( ( be & 0x0F ) < ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG;

#define CARRYREVUPDATEWITHCARRY( be, af ) \
	if ( be <= af ) \
		regs.b.f |= CYFLAG; \
	else \
		regs.b.f &= ~CYFLAG; \
	if ( ( be & 0x0F ) <= ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG;

#define HUPDATE( be, af ) \
	if ( ( be & 0x0F ) > ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG;

#define HREVUPDATE( be, af ) \
	if ( ( be & 0x0F ) < ( af & 0x0F ) ) \
		regs.b.f |= HFLAG; \
	else \
		regs.b.f &= ~HFLAG

#define ZUPDATE( n ) \
	if ( !n ) \
		regs.b.f |= ZFLAG; \
	else \
		regs.b.f &= ~ZFLAG;

#define PERIODE 250000000

#define CPU_RUN 0
#define CPU_HALT 1
#define CPU_STOP 2

using namespace std;

class core
{
	private:
		union registers
		{
			struct
			{
				byte pcl;
				byte pch;
				byte spl;
				byte sph;
				byte f;
				byte a;
				byte c;
				byte b;
				byte e;
				byte d;
				byte l;
				byte h;
			}
			b;
			struct
			{
				word pc;
				word sp;
				word af;
				word bc;
				word de;
				word hl;
			}
			w;
			//byte id[sizeof name];
		};

		static union registers regs;

		struct instruction
		{
			const char *mnemonic;
			byte cycles;
			byte (*function)( void );
		};

		static byte cycle;
		static bool ime;
		static byte state;
		static bool x2speed;
		static bool on;
		static struct instruction *next;

		#include <InstructionSet/instructionset.h>

	public:
		static memboy mem;
		static struct instruction decode[256];
		static struct instruction extdec[256];

		// Initialiser
		static void init( void );

		// Control
		static const char *cue( void );
		static void switchon( void );
		static void switchoff( void );

		// 8 bits Getters
		static byte geta( void );
		static byte getb( void );
		static byte getc( void );
		static byte getd( void );
		static byte gete( void );
		static byte geth( void );
		static byte getl( void );
		static byte getflags( void );

		// 16 bits Getters
		static word getpc( void );
		static word getsp( void );

		// System Getters
		static byte getstate( void );
		static bool is2xspeed( void );
		static bool getime( void );
};

class ref
{
	private:
		static scf file;
		static long defperiode;
		static long defstart;
	public:
		static long periode;
		static long start;
		static long debugstart;
		static long debugend;
		static const char *dmgbiospath;
		static const char *cgbbiospath;
		static long gbtype;

		static void init( void );
};

void timer( void );
void corereset( char *rom );
void corereset( void );
void corerun( dword cycle );
void coremaster( void );
void coremaster( char *rom );

#endif
