
#include <jackshit.h>

byte core::ei( void )
{
	ime = true;

	regs.w.pc++;
	return 1;
}
