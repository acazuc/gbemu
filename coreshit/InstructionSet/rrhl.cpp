
#include <jackshit.h>

byte core::rrhl( void )
{
	byte cy;
	byte b = mem[regs.w.hl];

	if ( b & 1 )
		cy = CYFLAG;
	else
		cy = 0;

	if ( regs.b.f & CYFLAG )
		b = ( b >> 1 ) + 128;
	else
		b >>= 1;

	regs.b.f = cy;
	ZUPDATE( b );

	mem[regs.w.hl] = b;
	regs.w.pc++;
	return 4;
}
