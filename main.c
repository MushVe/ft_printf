#include <stdio.h>
#include <stdarg.h>
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"



int main(void)
{
	ft_putendl("Bye");
	printargs(5, 2, 14, 84, 97, 0, 15, 24, 48, -1);
	printargs(84, 51, -1);
	printargs(-1);
	printargs(1, -1);
	ft_printf("Aa %d Bb %c Cc %s");
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