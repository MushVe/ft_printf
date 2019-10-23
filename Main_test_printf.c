#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"



int main(void)
{
/*	ft_printf("%.0p", 0); 
	// ft_printf("%.0p, %.p", 0, 0); 
	// ft_printf("%.p, %.0p", 0, 0);

	ft_printf("> :%.s", "hello"); 
	ft_printf("> :%.0s", "hello"); 
	ft_printf("> :%.s", "NULL"); 
	ft_printf("> :%.0s", "NULL"); 
	ft_printf("> :%.s", "hoi test"); 
	ft_printf("> :%3.s", "hoi test"); 
	ft_printf("> :%10.s", "hoi test"); 
	ft_printf("> :%3.s", NULL); 
	ft_printf("> :%10.s", NULL); 
	ft_printf("> :%-3.s", "hoi test"); 
	ft_printf("> :%-8.s", "hoi test"); 
	ft_printf("> :%-3.s", NULL); 
	ft_printf("> :%-8.s", NULL); 
	ft_printf("> :%-.00s", "hoi test"); 
	ft_printf("> :%.0u", 0); 
	ft_printf("> :%.u", 0); 
	ft_printf("> :%5.0u", 0); 
	ft_printf("> :%5.u", 0); 
	ft_printf("> :%-5.0u", 0); 
	ft_printf("> :%-5.u", 0); 
	ft_printf("> :%p", NULL); 
	ft_printf("%5p", 0); 

	int p = 643;

	ft_printf("%p.", &p); 
	ft_printf("%0p.", &p); 
	ft_printf("%.p.", &p); 
	ft_printf("%22.25p.", &p); 
	ft_printf("%22p.", &p); 
	ft_printf("%25p.", &p); 
	ft_printf("%22.p.", &p); 
	ft_printf("%.25p.", &p); 
	ft_printf("%-22.25p.", &p); 
	ft_printf("%-22p.", &p); 
	ft_printf("%-25p.", &p); 
	ft_printf("%-22.p.", &p); 
	ft_printf("%-.25p.", &p); 
	ft_printf("%0.25p.", &p); 
	ft_printf("%022.25p.", &p); 
	ft_printf("%022p.", &p); 
	ft_printf("%025p.", &p); 
	ft_printf("%022.p.", &p); 
	ft_printf("%022.0p.", &p); 
	ft_printf("@moulitest: %.d %.0d.", 0, 0); 
	ft_printf("@moulitest: %5.d %5.0d.", 0, 0); 
	ft_printf("@moulitest: %.5d %1.5d.", 0, 0); 
	ft_printf("%+d", 0); 
	ft_printf("%hd", -32768); 
	ft_printf("%hd", -32769); 
	ft_printf("@moulitest: %.d %.0d.", 2, 2); 
	ft_printf("@moulitest: %5.d %5.0d.", 4, 4); 
	ft_printf("@moulitest: %.d %.0d.", 1, 1); 
	ft_printf("@moulitest: %5.d %5.0d.", 47, 47); 
	ft_printf("%03.2d.", 0); 
	ft_printf("%03.2d.", 1); 
	ft_printf("%04.2d.", 1); 
	ft_printf("%03.1d.", 1); 
	ft_printf("%07.4d.", 1); 
	ft_printf("%04.7d.", 1); 
	ft_printf("%0+5d.", 42); 
	ft_printf("%0+5d.", -42); 
	ft_printf("%hd.", 32768); 
	ft_printf("%hhd.", 128); 
	ft_printf("%hhd.", -129); 
	ft_printf("%ld.", 2147483647); 
	ft_printf("%ld.", -2147483648); 
	ft_printf("%ld.", 2147483648); 
	ft_printf("%ld.", -2147483649); 
	ft_printf("% 10.5d.", 4242); 
	ft_printf("%+10.5d.", 4242); 
	ft_printf("%-+10.5d.", 4242); 
	ft_printf("@moulitest: %.o %.0o.", 0, 0); 
	ft_printf("@moulitest: %5.o %5.0o.", 0, 0); 
	ft_printf("@moulitest: %#.o %#.0o.", 0, 0); 
	ft_printf("% u.", 4294967295); 
	ft_printf("%+u.", 4294967295); 
	ft_printf("%   %.", "test"); 
	ft_printf("%lx.", 4294967296); 
	ft_printf("%lx.", 100000000); 
	ft_printf("%llX.", 4294967296); 
	ft_printf("%llx.", 9223372036854775807); 
	ft_printf("%llx.", 9223372036854775808); 
	ft_printf("%#llx.", 9223372036854775807); 
	ft_printf("%#x.", 0); 
	ft_printf("%#08x.", 42); 
	ft_printf("@moulitest: %#.x %#.0x.", 0, 0); 
	ft_printf("@moulitest: %.x %.0x.", 0, 0); 
	ft_printf("@moulitest: %5.x %6.0x.", 0, 0); 
	ft_printf("%10s is a string.", "this"); 
	ft_printf("%-10s is a string.", "this"); 
	ft_printf("@moulitest: %s.", NULL); 
	ft_printf("%.2c.", NULL); 
	ft_printf("%s %s.", NULL, "string"); 
	ft_printf("@moulitest: %c.", 0); 
	ft_printf("%2c.", 0); 
	ft_printf("%c.", 0); 
	ft_printf("%4c.", 0); 
	ft_printf("null %c and text.", 0); 
	ft_printf("% c.", 0); 
	ft_printf("%#6o.", 2500); 
	ft_printf("%-#6o.", 2500); 
	ft_printf("@moulitest: %.o %.0o.", 0, 0); 
	ft_printf("@moulitest: %5.o %5.0o.", 0, 0); 
	ft_printf("%0+5d.", 42); 
	ft_printf("%hd.", 32768); 
	ft_printf("%hhd.", 128); 
	ft_printf("%hhd.", -129); 
	ft_printf("%ld.", 2147483648); 
	ft_printf("%ld.", -2147483649); 
	ft_printf("%lld.", 9223372036854775807); 
	ft_printf("%lld.", -9223372036854775808); 
	ft_printf("% 10.5d.", 4242); 
	ft_printf("%+10.5d.", 4242); 
	ft_printf("%-+10.5d.", 4242); 
	ft_printf("%03.2d.", 0); 
	ft_printf("%03.2d.", 1); 
	ft_printf("@moulitest: %.d %.0d.", 0, 0); 
	ft_printf("@moulitest: %5.d %5.0d.", 0, 0); 
	ft_printf("% u.", 4294967295); 
	ft_printf("%+u.", 4294967295); 
	ft_printf("%lu.", 4294967296); 
	ft_printf("%lu.", -42); 
	ft_printf("%llu.", 4999999999); 

	unsigned int	X1 = 15680;
	unsigned int	x1 = -15680;
	unsigned int	X2 = 2990;
	unsigned int	x2 = 2990;
	int				d1 = 35;
	int				d2 = 2;
	int				d3 = 4096;
	int				d4 = 857;
	int				d5 = 41;
	char			c1 = 'c';
	char			*s1 = "test";

	ft_printf(".%d.", X1); 
	ft_printf(".%+10.1d.", X1); 
	ft_printf(".% 13.1d.", X1); 
	ft_printf(".% d.", X1); 
	ft_printf(".%-10.7d.", X1); 
	ft_printf(".%010d.", X1); 
	ft_printf(".%d.", x1); 
	ft_printf(".%+10.1d.", x1); 
	ft_printf(".% 13.1d.", x1); 
	ft_printf(".% d.", x1); 
	ft_printf(".%-10.7d.", x1); 
	ft_printf(".%010d.", x1); 
	ft_printf(".%10.1X.", X1); 
	ft_printf(".%13.1X.", X1); 
	ft_printf(".%10.7d.", X1); 
	ft_printf(".%010X.", X1); 
	ft_printf(".%012X.", X1); 
	ft_printf(".%-10.1X.", X1); 
	ft_printf(".%5.8x.", x1); 
	ft_printf(".%12X.", X2); 
	ft_printf(".%0.0x.", x2); 
	ft_printf(".%12.hd.", (short)d1); 
	ft_printf(".%.12hhd.", (char)d2); 
	ft_printf(".%ld.", (long)d3); 
	ft_printf(".%lld.", (long long)d4); 
	ft_printf(".%i.", d5); 
	ft_printf(".%c.", c1); 
	ft_printf(".%.3s.", s1); 
	ft_printf(".%.5s.", s1); 

	ft_printf("%X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	 				X1, d2, d1, c1, s1, x1);
	
*/





















	ft_printf("%+05u", 432); // printf(" 1.\n");
	// printf("%+05u", 432); // printf(" 2.\n");
	ft_printf("%+04u", 0); // printf(" 3.\n");
	// printf("%+04u", 0); // printf(" 4.\n");

	ft_printf("%5"); // printf(" 1.\n");
	// printf("%5"); // printf(" 2.\n");

	ft_printf("%5"); // printf(" a.\n");
	// printf("%5"); // printf(" b.\n");
	ft_printf("%05"); // printf(" c.\n");
	// printf("%05"); // printf(" d.\n");
	ft_printf("%-05"); // printf(" e.\n");
	// printf("%-05"); // printf(" f.\n");
	ft_printf("%-5"); // printf(" g.\n");
	// printf("%-5"); // printf(" h.\n");

	ft_printf("%6"); // printf(" i.\n");
	// printf("%6"); // printf(" j.\n");
	ft_printf("%06"); // printf(" k.\n");
	// printf("%06"); // printf(" l.\n");
	ft_printf("%-06"); // printf(" m.\n");
	// printf("%-06"); // printf(" n.\n");
	ft_printf("%-6"); // printf(" o.\n");
	// printf("%-6"); // printf(" p.\n");

	ft_printf("%#.3o", 1); // printf(".\n");
	// printf("%#.3o", 1); // printf(".\n");

	ft_printf("%hhu, %hhu", 0, 255 + 42); // printf(".\n");
	// printf("%hhu, %hhu", 0, 255 + 42); // printf(".\n");
	ft_printf("{% 03d}", 0); // printf(".\n");
	// printf("{% 03d}", 0); // printf(".\n");
	ft_printf("% 03d", 0); // printf(".\n");
	// printf("% 03d", 0); // printf(".\n");
	ft_printf("%.0p, %.p", 0, 0); // printf(".\n");
	// printf("%.0p, %.p", 0, 0); // printf(".\n");
	ft_printf("%.p, %.0p", 0, 0); // printf(".\n");
	// printf("%.p, %.0p", 0, 0); // printf(".\n");
	ft_printf("%hhu / %hhu", 32767 - 42, 32767 - 4200); // printf(".\n");
	// printf("%hhu / %hhu", 32767 - 42, 32767 - 4200); // printf(".\n");
	ft_printf("%o, %ho, %hho", -42, -42, -42); // printf(".\n");
	// printf("%o, %ho, %hho", -42, -42, -42); // printf(".\n");

	ft_printf("%5"); // printf(".\n");
	// printf("%5"); // printf(".\n");
	ft_printf("%05"); // printf(".\n");
	// printf("%05"); // printf(".\n");
	ft_printf("%-05"); // printf(".\n");
	// printf("%-05"); // printf(".\n");
	ft_printf("%-5"); // printf(".\n");
	// printf("%-5"); // printf(".\n");
	ft_printf("> :%.s", "hello"); // printf(".\n");
	// printf("  :%.s", "hello"); // printf(".\n");
	ft_printf("> :%.0s", "hello"); // printf(".\n");
	// printf("  :%.0s", "hello"); // printf(".\n");
	ft_printf("> :%.s", "NULL"); // printf(".\n");
	// printf("  :%.s", "NULL"); // printf(".\n");
	ft_printf("> :%.0s", "NULL"); // printf(".\n");
	// printf("  :%.0s", "NULL"); // printf(".\n");
	ft_printf("> :%.s", "hoi test"); // printf(".\n");
	// printf("  :%.s", "hoi test"); // printf(".\n");
	ft_printf("> :%3.s", "hoi test"); // printf(".\n");
	// printf("  :%3.s", "hoi test"); // printf(".\n");
	ft_printf("> :%10.s", "hoi test"); // printf(".\n");
	// printf("  :%10.s", "hoi test"); // printf(".\n");
	ft_printf("> :%3.s", NULL); // printf(".\n");
	// printf("  :%3.s", NULL); // printf(".\n");
	ft_printf("> :%10.s", NULL); // printf(".\n");
	// printf("  :%10.s", NULL); // printf(".\n");
	ft_printf("> :%-3.s", "hoi test"); // printf(".\n");
	// printf("  :%-3.s", "hoi test"); // printf(".\n");
	ft_printf("> :%-8.s", "hoi test"); // printf(".\n");
	// printf("  :%-8.s", "hoi test"); // printf(".\n");
	ft_printf("> :%-3.s", NULL); // printf(".\n");
	// printf("  :%-3.s", NULL); // printf(".\n");
	ft_printf("> :%-8.s", NULL); // printf(".\n");
	// printf("  :%-8.s", NULL); // printf(".\n");
	ft_printf("> :%-.00s", "hoi test"); // printf(".\n");
	// printf("  :%-.00s", "hoi test"); // printf(".\n");
	ft_printf("> :%.0u", 0); // printf(".\n");
	// printf("  :%.0u", 0); // printf(".\n");
	ft_printf("> :%.u", 0); // printf(".\n");
	// printf("  :%.u", 0); // printf(".\n");
	ft_printf("> :%5.0u", 0); // printf(".\n");
	// printf("  :%5.0u", 0); // printf(".\n");
	ft_printf("> :%5.u", 0); // printf(".\n");
	// printf("  :%5.u", 0); // printf(".\n");
	ft_printf("> :%-5.0u", 0); // printf(".\n");
	// printf("  :%-5.0u", 0); // printf(".\n");
	ft_printf("> :%-5.u", 0); // printf(".\n");
	// printf("  :%-5.u", 0); // printf(".\n");
	ft_printf("> :%p", NULL); // printf(".\n");
	// printf("  :%p", NULL); // printf(".\n");
	ft_printf("%5p", 0); // printf(".\n");
	// printf("%5p", 0); // printf(".\n");
	
	int p = 643;

	ft_printf("%p.", &p); // printf("\n");
	// printf("%p.", &p); // printf("\n");
	ft_printf("%0p.", &p); // printf("\n");
	// printf("%0p.", &p); // printf("\n");
	ft_printf("%.p.", &p); // printf("\n");
	// printf("%.p.", &p); // printf("\n");
	ft_printf("%22.25p.", &p); // printf("\n");
	// printf("%22.25p.", &p); // printf("\n");
	ft_printf("%22p.", &p); // printf("\n");
	// printf("%22p.", &p); // printf("\n");
	ft_printf("%25p.", &p); // printf("\n");
	// printf("%25p.", &p); // printf("\n");
	ft_printf("%22.p.", &p); // printf("\n");
	// printf("%22.p.", &p); // printf("\n");
	ft_printf("%.25p.", &p); // printf("\n");
	// printf("%.25p.", &p); // printf("\n");
	ft_printf("%-22.25p.", &p); // printf("\n");
	// printf("%-22.25p.", &p); // printf("\n");
	ft_printf("%-22p.", &p); // printf("\n");
	// printf("%-22p.", &p); // printf("\n");
	ft_printf("%-25p.", &p); // printf("\n");
	// printf("%-25p.", &p); // printf("\n");
	ft_printf("%-22.p.", &p); // printf("\n");
	// printf("%-22.p.", &p); // printf("\n");
	ft_printf("%-.25p.", &p); // printf("\n");
	// printf("%-.25p.", &p); // printf("\n");
	ft_printf("%0.25p.", &p); // printf("\n");
	// printf("%0.25p.", &p); // printf("\n");
	ft_printf("%022.25p.", &p); // printf("\n");
	// printf("%022.25p.", &p); // printf("\n");
	ft_printf("%022p.", &p); // printf("\n");
	// printf("%022p.", &p); // printf("\n");
	ft_printf("%025p.", &p); // printf("\n");
	// printf("%025p.", &p); // printf("\n");
	ft_printf("%022.p.", &p); // printf("\n");
	// printf("%022.p.", &p); // printf("\n");
	ft_printf("%022.0p.", &p); // printf("\n");
	// printf("%022.0p.", &p); // printf("\n");

	ft_printf("@moulitest: %.d %.0d.", 0, 0); // printf("\n");
	// printf("@moulitest: %.d %.0d.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %5.d %5.0d.", 0, 0); // printf("\n");
	// printf("@moulitest: %5.d %5.0d.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %.5d %1.5d.", 0, 0); // printf("\n");
	// printf("@moulitest: %.5d %1.5d.", 0, 0); // printf("\n");

	ft_printf("%+d", 0); // printf("\n");
	// printf("%+d", 0); // printf("\n");
	ft_printf("%hd", -32768); // printf("\n");
	// printf("%hd", -32768); // printf("\n");
	ft_printf("%hd", -32769); // printf("\n");
	// printf("%hd", -32769); // printf("\n");

	ft_printf("@moulitest: %.d %.0d.", 2, 2); // printf("\n");
	// printf("@moulitest: %.d %.0d.", 2, 2); // printf("\n");
	ft_printf("@moulitest: %5.d %5.0d.", 4, 4); // printf("\n");
	// printf("@moulitest: %5.d %5.0d.", 4, 4); // printf("\n");
	ft_printf("@moulitest: %.d %.0d.", 1, 1); // printf("\n");
	// printf("@moulitest: %.d %.0d.", 1, 1); // printf("\n");
	ft_printf("@moulitest: %5.d %5.0d.", 47, 47); // printf("\n");
	// printf("@moulitest: %5.d %5.0d.", 47, 47); // printf("\n");
	ft_printf("%03.2d.", 0); // printf("\n");
	// printf("%03.2d.", 0); // printf("\n");
	ft_printf("%03.2d.", 1); // printf("\n");
	// printf("%03.2d.", 1); // printf("\n");
	ft_printf("%04.2d.", 1); // printf("\n");
	// printf("%04.2d.", 1); // printf("\n");
	ft_printf("%03.1d.", 1); // printf("\n");
	// printf("%03.1d.", 1); // printf("\n");
	ft_printf("%07.4d.", 1); // printf("\n");
	// printf("%07.4d.", 1); // printf("\n");
	ft_printf("%04.7d.", 1); // printf("\n");
	// printf("%04.7d.", 1); // printf("\n");
	ft_printf("%0+5d.", 42); // printf("\n");
	// printf("%0+5d.", 42); // printf("\n");
	ft_printf("%0+5d.", -42); // printf("\n");
	// printf("%0+5d.", -42); // printf("\n");
	ft_printf("%hd.", 32768); // printf("\n");
	// printf("%hd.", 32768); // printf("\n");
	ft_printf("%hhd.", 128); // printf("\n");
	// printf("%hhd.", 128); // printf("\n");
	ft_printf("%hhd.", -129); // printf("\n");
	// printf("%hhd.", -129); // printf("\n");
	ft_printf("%ld.", 2147483647); // printf("\n");
	// printf("%ld.", 2147483647); // printf("\n");
	ft_printf("%ld.", -2147483648); // printf("\n");
	// printf("%ld.", -2147483648); // printf("\n");
	ft_printf("%ld.", 2147483648); // printf("\n");
	// printf("%ld.", 2147483648); // printf("\n");
	ft_printf("%ld.", -2147483649); // printf("\n");
	// printf("%ld.", -2147483649); // printf("\n");
	ft_printf("% 10.5d.", 4242); // printf("\n");
	// printf("% 10.5d.", 4242); // printf("\n");
	ft_printf("%+10.5d.", 4242); // printf("\n");
	// printf("%+10.5d.", 4242); // printf("\n");
	ft_printf("%-+10.5d.", 4242); // printf("\n");
	// printf("%-+10.5d.", 4242); // printf("\n");

	ft_printf("@moulitest: %.o %.0o.", 0, 0); // printf("\n");
	// printf("@moulitest: %.o %.0o.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %5.o %5.0o.", 0, 0); // printf("\n");
	// printf("@moulitest: %5.o %5.0o.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %#.o %#.0o.", 0, 0); // printf("\n");
	// printf("@moulitest: %#.o %#.0o.", 0, 0); // printf("\n");
	ft_printf("% u.", 4294967295); // printf("\n");
	// printf("% u.", 4294967295); // printf("\n");
	ft_printf("%+u.", 4294967295); // printf("\n");
	// printf("%+u.", 4294967295); // printf("\n");

	ft_printf("%   %.", "test"); // printf("\n");
	// printf("%   %.", "test"); // printf("\n");
	ft_printf("%lx.", 4294967296); // printf("\n");
	// printf("%lx.", 4294967296); // printf("\n");
	ft_printf("%lx.", 100000000); // printf("\n");
	// printf("%lx.", 100000000); // printf("\n");
	ft_printf("%llX.", 4294967296); // printf("\n");
	// printf("%llX.", 4294967296); // printf("\n");
	ft_printf("%llx.", 9223372036854775807); // printf("\n");
	// printf("%llx.", 9223372036854775807); // printf("\n");
	ft_printf("%llx.", 9223372036854775808); // printf("\n");
	// printf("%llx.", 9223372036854775808); // printf("\n");
	ft_printf("%#llx.", 9223372036854775807); // printf("\n");
	// printf("%#llx.", 9223372036854775807); // printf("\n");
	ft_printf("%#x.", 0); // printf("\n");
	// printf("%#x.", 0); // printf("\n");
	ft_printf("%#08x.", 42); // printf("\n");
	// printf("%#08x.", 42); // printf("\n");
	ft_printf("@moulitest: %#.x %#.0x.", 0, 0); // printf("\n");
	// printf("@moulitest: %#.x %#.0x.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %.x %.0x.", 0, 0); // printf("\n");
	// printf("@moulitest: %.x %.0x.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %5.x %6.0x.", 0, 0); // printf("\n");
	// printf("@moulitest: %5.x %6.0x.", 0, 0); // printf("\n");
	ft_printf("%10s is a string.", "this"); // printf("\n");
	// printf("%10s is a string.", "this"); // printf("\n");
	ft_printf("%-10s is a string.", "this"); // printf("\n");
	// printf("%-10s is a string.", "this"); // printf("\n");
	ft_printf("@moulitest: %s.", NULL); // printf("\n");
	// printf("@moulitest: %s.", NULL); // printf("\n");
	ft_printf("%.2c.", NULL); // printf("\n");
	// printf("%.2c.", NULL); // printf("\n");
	ft_printf("%s %s.", NULL, "string"); // printf("\n");
	// printf("%s %s.", NULL, "string"); // printf("\n");
	ft_printf("@moulitest: %c.", 0); // printf("\n");
	// printf("@moulitest: %c.", 0); // printf("\n");
	ft_printf("%2c.", 0); // printf("\n");
	// printf("%2c.", 0); // printf("\n");
	ft_printf("%c.", 0); // printf("\n");
	// printf("%c.", 0); // printf("\n");
	ft_printf("%4c.", 0); // printf("\n");
	// printf("%4c.", 0); // printf("\n");
	ft_printf("null %c and text.", 0); // printf("\n");
	// printf("null %c and text.", 0); // printf("\n");
	ft_printf("% c.", 0); // printf("\n");
	// printf("% c.", 0); // printf("\n");
	ft_printf("%#6o.", 2500); // printf("\n");
	// printf("%#6o.", 2500); // printf("\n");
	ft_printf("%-#6o.", 2500); // printf("\n");
	// printf("%-#6o.", 2500); // printf("\n");
	ft_printf("@moulitest: %.o %.0o.", 0, 0); // printf("\n");
	// printf("@moulitest: %.o %.0o.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %5.o %5.0o.", 0, 0); // printf("\n");
	// printf("@moulitest: %5.o %5.0o.", 0, 0); // printf("\n");
	ft_printf("%0+5d.", 42); // printf("\n");
	// printf("%0+5d.", 42); // printf("\n");
	ft_printf("%hd.", 32768); // printf("\n");
	// printf("%hd.", 32768); // printf("\n");
	ft_printf("%hhd.", 128); // printf("\n");
	// printf("%hhd.", 128); // printf("\n");
	ft_printf("%hhd.", -129); // printf("\n");
	// printf("%hhd.", -129); // printf("\n");
	ft_printf("%ld.", 2147483648); // printf("\n");
	// printf("%ld.", 2147483648); // printf("\n");
	ft_printf("%ld.", -2147483649); // printf("\n");
	// printf("%ld.", -2147483649); // printf("\n");
	ft_printf("%lld.", 9223372036854775807); // printf("\n");
	// printf("%lld.", 9223372036854775807); // printf("\n");
	ft_printf("%lld.", -9223372036854775808); // printf("\n");
	// printf("%lld.", -9223372036854775808); // printf("\n");
	ft_printf("% 10.5d.", 4242); // printf("\n");
	// printf("% 10.5d.", 4242); // printf("\n");
	ft_printf("%+10.5d.", 4242); // printf("\n");
	// printf("%+10.5d.", 4242); // printf("\n");
	ft_printf("%-+10.5d.", 4242); // printf("\n");
	// printf("%-+10.5d.", 4242); // printf("\n");
	ft_printf("%03.2d.", 0); // printf("\n");
	// printf("%03.2d.", 0); // printf("\n");
	ft_printf("%03.2d.", 1); // printf("\n");
	// printf("%03.2d.", 1); // printf("\n");
	ft_printf("@moulitest: %.d %.0d.", 0, 0); // printf("\n");
	// printf("@moulitest: %.d %.0d.", 0, 0); // printf("\n");
	ft_printf("@moulitest: %5.d %5.0d.", 0, 0); // printf("\n");
	// printf("@moulitest: %5.d %5.0d.", 0, 0); // printf("\n");
	ft_printf("% u.", 4294967295); // printf("\n");
	// printf("% u.", 4294967295); // printf("\n");
	ft_printf("%+u.", 4294967295); // printf("\n");
	// printf("%+u.", 4294967295); // printf("\n");
	ft_printf("%lu.", 4294967296); // printf("\n");
	// printf("%lu.", 4294967296); // printf("\n");
	ft_printf("%lu.", -42); // printf("\n");
	// printf("%lu.", -42); // printf("\n");
	ft_printf("%llu.", 4999999999); // printf("\n");
	// printf("%llu.", 4999999999); // printf("\n");
	
	unsigned int	X1 = 15680;
	unsigned int	x1 = -15680;
	unsigned int	X2 = 2990;
	unsigned int	x2 = 2990;
	int				d1 = 35;
	int				d2 = 2;
	int				d3 = 4096;
	int				d4 = 857;
	int				d5 = 41;
	char			c1 = 'c';
	char			*s1 = "test";

	ft_printf(".%d.", X1); // printf("\n");
	// printf(".%d.", X1); // printf("\n");
	ft_printf(".%+10.1d.", X1); // printf("\n");
	// printf(".%+10.1d.", X1); // printf("\n");
	ft_printf(".% 13.1d.", X1); // printf("\n");
	// printf(".% 13.1d.", X1); // printf("\n");
	ft_printf(".% d.", X1); // printf("\n");
	// printf(".% d.", X1); // printf("\n");
	ft_printf(".%-10.7d.", X1); // printf("\n");
	// printf(".%-10.7d.", X1); // printf("\n");
	ft_printf(".%010d.", X1); // printf("\n");
	// printf(".%010d.", X1); // printf("\n");

	ft_printf(".%d.", x1); // printf("\n");
	// printf(".%d.", x1); // printf("\n");
	ft_printf(".%+10.1d.", x1); // printf("\n");
	// printf(".%+10.1d.", x1); // printf("\n");
	ft_printf(".% 13.1d.", x1); // printf("\n");
	// printf(".% 13.1d.", x1); // printf("\n");
	ft_printf(".% d.", x1); // printf("\n");
	// printf(".% d.", x1); // printf("\n");
	ft_printf(".%-10.7d.", x1); // printf("\n");
	// printf(".%-10.7d.", x1); // printf("\n");
	ft_printf(".%010d.", x1); // printf("\n");
	// printf(".%010d.", x1); // printf("\n");
	ft_printf(".%10.1X.", X1); // printf("\n");
	// printf(".%10.1X.", X1); // printf("\n");
	ft_printf(".%13.1X.", X1); // printf("\n");
	// printf(".%13.1X.", X1); // printf("\n");
	ft_printf(".%10.7d.", X1); // printf("\n");
	// printf(".%10.7d.", X1); // printf("\n");
	ft_printf(".%010X.", X1); // printf("\n");
	// printf(".%010X.", X1); // printf("\n");
	ft_printf(".%012X.", X1); // printf("\n");
	// printf(".%012X.", X1); // printf("\n");
	ft_printf(".%-10.1X.", X1); // printf("\n");
	// printf(".%-10.1X.", X1); // printf("\n");
	ft_printf(".%5.8x.", x1); // printf("\n");
	// printf(".%5.8x.", x1); // printf("\n");
	ft_printf(".%12X.", X2); // printf("\n");
	// printf(".%12X.", X2); // printf("\n");
	ft_printf(".%0.0x.", x2); // printf("\n");
	// printf(".%0.0x.", x2); // printf("\n");
	ft_printf(".%12.hd.", (short)d1); // printf("\n");
	// printf(".%12.hd.", (short)d1); // printf("\n");
	ft_printf(".%.12hhd.", (char)d2); // printf("\n");
	// printf(".%.12hhd.", (char)d2); // printf("\n");
	ft_printf(".%ld.", (long)d3); // printf("\n");
	// printf(".%ld.", (long)d3); // printf("\n");
	ft_printf(".%lld.", (long long)d4); // printf("\n");
	// printf(".%lld.", (long long)d4); // printf("\n");
	ft_printf(".%i.", d5); // printf("\n");
	// printf(".%i.", d5); // printf("\n");
	ft_printf(".%c.", c1); // printf("\n");
	// printf(".%c.", c1); // printf("\n");
	ft_printf(".%.3s.", s1); // printf("\n");
	// printf(".%.3s.", s1); // printf("\n");
	ft_printf(".%.5s.", s1); // printf("\n");
	// printf(".%.5s.", s1); // printf("\n");

	// printf("\n");
	ft_printf("%X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	 				X1, d2, d1, c1, s1, x1);
	// printf("%X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	//				X1, d2, d1, c1, s1, x1);

	return 0;
}