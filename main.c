#include <stdio.h>
#include <stdarg.h>
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"



int main(void)
{
	
/*	unsigned int	X1 = 15680;
	unsigned int	x1 = -15680;
	unsigned int	X2 = 2990;
	unsigned int	x2 = 2990;
	int				d1 = 35;
	int				d2 = 2;
	int				d3 = 4096;
	int				d4 = 857;
	int				d5 = 41;
	char			c1 = 'c';
	char			*s1 = "test";*/

/*	ft_printf("me > .%d.", X1); printf("\n");
	printf("pf > .%d.", X1); printf("\n");
	ft_printf("me > .%+10.1d.", X1); printf("\n");
	printf("pf > .%+10.1d.", X1); printf("\n");
	ft_printf("me > .% 13.1d.", X1); printf("\n");
	printf("pf > .% 13.1d.", X1); printf("\n");
	ft_printf("me > .% d.", X1); printf("\n");
	printf("pf > .% d.", X1); printf("\n");
	ft_printf("me > .%-10.7d.", X1); printf("\n");
	printf("pf > .%-10.7d.", X1); printf("\n");
	ft_printf("me > .%010d.", X1); printf("\n");
	printf("pf > .%010d.", X1); printf("\n");

	ft_printf("me > .%d.", x1); printf("\n");
	printf("pf > .%d.", x1); printf("\n");
	ft_printf("me > .%+10.1d.", x1); printf("\n");
	printf("pf > .%+10.1d.", x1); printf("\n");
	ft_printf("me > .% 13.1d.", x1); printf("\n");
	printf("pf > .% 13.1d.", x1); printf("\n");
	ft_printf("me > .% d.", x1); printf("\n");
	printf("pf > .% d.", x1); printf("\n");
	ft_printf("me > .%-10.7d.", x1); printf("\n");
	printf("pf > .%-10.7d.", x1); printf("\n");
	ft_printf("me > .%010d.", x1); printf("\n");
	printf("pf > .%010d.", x1); printf("\n");
	ft_printf("me > .%10.1X.", X1); printf("\n");
	printf("pf > .%10.1X.", X1); printf("\n");
	ft_printf("me > .%13.1X.", X1); printf("\n");
	printf("pf > .%13.1X.", X1); printf("\n");
	ft_printf("me > .%10.7d.", X1); printf("\n");
	printf("pf > .%10.7d.", X1); printf("\n");
	ft_printf("me > .%010X.", X1); printf("\n");
	printf("pf > .%010X.", X1); printf("\n");
	ft_printf("me > .%012X.", X1); printf("\n");
	printf("pf > .%012X.", X1); printf("\n");
	ft_printf("me > .%-10.1X.", X1); printf("\n");
	printf("pf > .%-10.1X.", X1); printf("\n");
	ft_printf("me > .%5.8x.", x1); printf("\n");
	printf("pf > .%5.8x.", x1); printf("\n");
	ft_printf("me > .%12X.", X2); printf("\n");
	printf("pf > .%12X.", X2); printf("\n");
	ft_printf("me > .%0.0x.", x2); printf("\n");
	printf("pf > .%0.0x.", x2); printf("\n");
	ft_printf("me > .%12.hd.", (short)d1); printf("\n");
	printf("pf > .%12.hd.", (short)d1); printf("\n");
	ft_printf("me > .%.12hhd.", (char)d2); printf("\n");
	printf("pf > .%.12hhd.", (char)d2); printf("\n");
	ft_printf("me > .%ld.", (long)d3); printf("\n");
	printf("pf > .%ld.", (long)d3); printf("\n");
	ft_printf("me > .%lld.", (long long)d4); printf("\n");
	printf("pf > .%lld.", (long long)d4); printf("\n");
	ft_printf("me > .%i.", d5); printf("\n");
	printf("pf > .%i.", d5); printf("\n");
	ft_printf("me > .%c.", c1); printf("\n");
	printf("pf > .%c.", c1); printf("\n");
	ft_printf("me > .%.3s.", s1); printf("\n");
	printf("pf > .%.3s.", s1); printf("\n");
	ft_printf("me > .%.5s.", s1); printf("\n");
	printf("pf > .%.5s.", s1); printf("\n");

	printf("\n");
	ft_printf("me : %X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	 				X1, d2, d1, c1, s1, x1);
	printf("pf : %X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	 				X1, d2, d1, c1, s1, x1);*/
	

	// ft_printf("prontf : %X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	// 				X1, d2, d1, c1, s1, x1);
	//    printf("printf : %X %d1.Aa,2 %d 3:Bb;4 %c 5!Cc?6 %% %s 7=Dd %x .\n",
	// 				X1, d2, d1, c1, s1, x1);

	// ft_putendl("");

	// ft_printf("prontf : .%#-X %#-x %X %x %+hd % hhd %0ld %lld %-c %-i %s\n",
	// X1, x1, X2, x2, (short)d1, (char)d2, (long)d3, (long long)d4, c1, d5, s1);

	//    printf("printf : .%#-10.1X.%#5.8x.%012X.%0.0x.%+hd.%.hhd.%0ld.%lld.%-c.%-i.%s.\n",
	// X1, x1, X2, x2, (short)d1, (char)d2, (long)d3, (long long)d4, c1, d5, s1);

	return 0;
}

/*
int main()
{
	char * str;
	
	str = ft_strnew(5);
	str = ft_strcpy(str, "ahahahah");

	printf("%c : %s : %p\n", 92, str, &str);
	printf("%%\n");
	printf("%d . %d . %d . %d\n", +123, -255, +0, -0);
	printf("%i . %i . %i . %i\n", +123, -255, +0, -0);
	printf("%o : %u : %x : %X\n", -123, -123, 213, 213);
	printf("%%\n");
	printf("%lld . %ld . %hhd . %hd\n",
		(long long)+123, (long)-255, (char)+0, (short)-0);
	printf("%lli . %li . %hhi . %hi\n",
		(long long)+123, (long)-255, (char)+0, (short)-0);
	printf("%%\n");
	printf("%llo : %llu : %llx : %llX\n",
		(long long)-123, (long long)-123, (long long)213, (long long)213);
	printf("%lo : %lu : %lx : %lX\n",
		(long)-123, (long)-123, (long)213, (long)213);
	printf("%hho : %hhu : %hhx : %hhX\n",
		(char)-123, (char)-123, (char)213, (char)213);
	printf("%ho : %hu : %hx : %hX\n",
		(short)-123, (short)-123, (short)213, (short)213);
	printf("%%\n");
	printf ("%c %c \n", 'a', 65);
	printf ("%d %ld\n", 1977, 650000L);
	printf ("%10d \n", 1977);
	printf ("%010d \n", 1977);
	printf ("%d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf ("%4.2f %+.0f \n", 3.1416, 3.1416);
	printf ("%f %lf %Lf\n", 3.1416, 3.1416, (long double)3.1416);
	printf ("%*d \n", 5, 10);
	printf ("%s \n", "A string");
	printf("%%\n");
	printf("");

	return (0);
}*/