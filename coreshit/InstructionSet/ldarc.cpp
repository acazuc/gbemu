
#include <jackshit.h>

byte core::ldarc( void )
{
	regs.b.a = mem[0xFF00 + regs.b.c];
	regs.w.pc++;
	return 2;
}
