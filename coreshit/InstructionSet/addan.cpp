
#include <jackshit.h>

byte core::addan( void )
{
	byte a;

	a = regs.b.a;
	regs.b.a += ( byte ) mem[regs.w.pc + 1];

	regs.b.f = 0;
	CARRYUPDATE( a, regs.b.a );
	ZUPDATE( regs.b.a );

	regs.w.pc += 2;
	return 2;
}
