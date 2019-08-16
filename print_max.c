#include <limits.h>
#include <stdio.h>

int	main()
{

	printf("Int Max            : %d\n", INT_MAX);
	printf("Int Min            : %d\n", INT_MIN);
	printf("Int Unsigned       : %u\n", UINT_MAX);

	printf("Short Max          : %d\n", SHRT_MAX);
	printf("Short Min          : %d\n", SHRT_MIN);
	printf("Short Unsigned     : %d\n", USHRT_MAX);

	printf("Char Max           : %d\n", CHAR_MAX);
	printf("Char Min           : %d\n", CHAR_MIN);
	printf("Char Unsigned      : %d\n", UCHAR_MAX);

	printf("Long Max           : %ld\n", LONG_MAX);
	printf("Long Min           : %ld\n", LONG_MIN);
	printf("Long Unsigned      : %lu\n", ULONG_MAX);

	printf("Long Long Max      : %lld\n", LLONG_MAX);
	printf("Long Long Min      : %lld\n", LLONG_MIN);
	printf("Long Long Unsigned : %llu\n", ULLONG_MAX);

}