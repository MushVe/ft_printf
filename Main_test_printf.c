#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"



int main(void)
{

	ft_printf("%   %", "test"); printf("\n");
	printf("%   %", "test"); printf("\n");
	ft_printf("%lx", 4294967296); printf("\n");
	printf("%lx", 4294967296); printf("\n");
	ft_printf("%llX", 4294967296); printf("\n");
	printf("%llX", 4294967296); printf("\n");
	ft_printf("%llx", 9223372036854775807); printf("\n");
	printf("%llx", 9223372036854775807); printf("\n");
	ft_printf("%llx", 9223372036854775808); printf("\n");
	printf("%llx", 9223372036854775808); printf("\n");
	ft_printf("%#llx", 9223372036854775807); printf("\n");
	printf("%#llx", 9223372036854775807); printf("\n");
	ft_printf("%#x", 0); printf("\n");
	printf("%#x", 0); printf("\n");
	ft_printf("%#08x", 42); printf("\n");
	printf("%#08x", 42); printf("\n");
/*	ft_printf("@moulitest: %#.x %#.0x", 0, 0); printf("\n");
	printf("@moulitest: %#.x %#.0x", 0, 0); printf("\n");
	ft_printf("@moulitest: %.x %.0x", 0, 0); printf("\n");
	printf("@moulitest: %.x %.0x", 0, 0); printf("\n");
	ft_printf("@moulitest: %5.x %5.0x", 0, 0); printf("\n");
	printf("@moulitest: %5.x %5.0x", 0, 0); printf("\n");
	ft_printf("%10s is a string", "this"); printf("\n");
	printf("%10s is a string", "this"); printf("\n");
	ft_printf("%-10s is a string", "this"); printf("\n");
	printf("%-10s is a string", "this"); printf("\n");
	ft_printf("@moulitest: %s", NULL); printf("\n");
	printf("@moulitest: %s", NULL); printf("\n");
	ft_printf("%.2c", NULL); printf("\n");
	printf("%.2c", NULL); printf("\n");
	ft_printf("%s %s", NULL, "string"); printf("\n");
	printf("%s %s", NULL, "string"); printf("\n");
	ft_printf("@moulitest: %c", 0); printf("\n");
	printf("@moulitest: %c", 0); printf("\n");
	ft_printf("%2c", 0); printf("\n");
	printf("%2c", 0); printf("\n");
	ft_printf("null %c and text", 0); printf("\n");
	printf("null %c and text", 0); printf("\n");
	ft_printf("% c", 0); printf("\n");
	printf("% c", 0); printf("\n");
	ft_printf("%#6o", 2500); printf("\n");
	printf("%#6o", 2500); printf("\n");
	ft_printf("%-#6o", 2500); printf("\n");
	printf("%-#6o", 2500); printf("\n");
	ft_printf("@moulitest: %.o %.0o", 0, 0); printf("\n");
	printf("@moulitest: %.o %.0o", 0, 0); printf("\n");
	ft_printf("@moulitest: %5.o %5.0o", 0, 0); printf("\n");
	printf("@moulitest: %5.o %5.0o", 0, 0); printf("\n");
	ft_printf("%0+5d", 42); printf("\n");
	printf("%0+5d", 42); printf("\n");
	ft_printf("%hd", 32768); printf("\n");
	printf("%hd", 32768); printf("\n");
	ft_printf("%hhd", 128); printf("\n");
	printf("%hhd", 128); printf("\n");
	ft_printf("%hhd", -129); printf("\n");
	printf("%hhd", -129); printf("\n");
	ft_printf("%ld", 2147483648); printf("\n");
	printf("%ld", 2147483648); printf("\n");
	ft_printf("%ld", -2147483649); printf("\n");
	printf("%ld", -2147483649); printf("\n");
	ft_printf("%lld", 9223372036854775807); printf("\n");
	printf("%lld", 9223372036854775807); printf("\n");
	ft_printf("%lld", -9223372036854775808); printf("\n");
	printf("%lld", -9223372036854775808); printf("\n");
	ft_printf("% 10.5d", 4242); printf("\n");
	printf("% 10.5d", 4242); printf("\n");
	ft_printf("%+10.5d", 4242); printf("\n");
	printf("%+10.5d", 4242); printf("\n");
	ft_printf("%-+10.5d", 4242); printf("\n");
	printf("%-+10.5d", 4242); printf("\n");
	ft_printf("%03.2d", 0); printf("\n");
	printf("%03.2d", 0); printf("\n");
	ft_printf("%03.2d", 1); printf("\n");
	printf("%03.2d", 1); printf("\n");
	ft_printf("@moulitest: %.d %.0d", 0, 0); printf("\n");
	printf("@moulitest: %.d %.0d", 0, 0); printf("\n");
	ft_printf("@moulitest: %5.d %5.0d", 0, 0); printf("\n");
	printf("@moulitest: %5.d %5.0d", 0, 0); printf("\n");
	ft_printf("% u", 4294967295); printf("\n");
	printf("% u", 4294967295); printf("\n");
	ft_printf("%+u", 4294967295); printf("\n");
	printf("%+u", 4294967295); printf("\n");
	ft_printf("%lu", 4294967296); printf("\n");
	printf("%lu", 4294967296); printf("\n");
	ft_printf("%lu", -42); printf("\n");
	printf("%lu", -42); printf("\n");
	ft_printf("%llu", 4999999999); printf("\n");
	printf("%llu", 4999999999); printf("\n");*/

	return 0;
}