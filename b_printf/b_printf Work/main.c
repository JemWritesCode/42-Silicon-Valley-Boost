// Testing only, do not submit for project.

#include "b_printf.h"
#include <stdio.h> // for regular libc printf
#define KGRN  "\x1B[32m" //Make text Green.
#define KRED  "\x1B[31m" //Text Red

char c = 'a';
char *ptr = &c;

void	redWrongCount(char int1, char int2) //if there's a difference, make it red.
{
	printf("MINE: Number of Characters Printed: %d \n", int1);
	printf("LIBC: Number of Characters Printed: %d \n", int2);
	if (int1 != int2)
		printf("%s !!!!!Different characters_printed found!!!!! %s \n", KRED, KGRN);
}

int		main(void)
{
	//b_printf tests by Jem Cope
	printf("%s ===========BEGIN TESTS===========\n", KGRN);

	redWrongCount(b_printf("MINE: Testing a regular string with percentage %% \n"), printf("LIBC: Testing a regular string with percentage %% \n"));
	printf("\n");

	redWrongCount(b_printf("MINE: Test character 'x': %c inside.\n", 'x'), printf("LIBC: Test character 'x': %c inside.\n", 'x'));
	printf("\n");

	redWrongCount(b_printf("MINE: Testing a string: %s in the middle.\n", "hello"), printf("LIBC: Testing a string: %s in the middle.\n", "hello"));
	printf("\n");


	b_printf("MINE: Testing a string with null: %s in the middle.\n", NULL);
	printf("LIBC: Testing a string with null: %s in the middle.\n", NULL);
	printf("\n");

	b_printf("MINE: Testing a string at the end: %s", "hello");
	printf("\n");
	printf("LIBC: Testing a string at the end: %s", "hello");
	printf("\n\n");

	b_printf("MINE: Testing a regular string.\n");
	printf("LIBC: Testing a regular string.\n");
	printf("\n");

	b_printf("MINE: Conversion char is last. 'x': %c", 'x');
	printf("\n");
	printf("LIBC: Conversion char is last. 'x': %c", 'x');
	printf("\n\n");

	b_printf("MINE: Multiple characters. 'x, y': %c and then %c.\n", 'x', 'y');
	printf("LIBC: Multiple characters. 'x, y': %c and then %c.\n", 'x', 'y');
	printf("\n");

	//printf("%d", b_printf("MINE: Testing invalid conversion character: %z in the middle.\n", 5));
	//printf("%d", printf("MINE: Testing invalid conversion character: %z in the middle.\n", 5)); // throws warning
	//printf("\n");

	printf("=========== NUMBER TESTS===========\n");

	printf("MINE: Number of Characters Printed: %d \n", b_printf("MINE: Testing a decimal number(d): %d in the middle.", 5));
	printf("LIBC: Number of Characters Printed: %d \n", printf("LIBC: Testing a decimal number(d): %d in the middle.", 5));
	printf("\n");

	printf("MINE: Number of Characters Printed: %d \n", b_printf("MINE: Testing a decimal number(d): %d in the middle.", 25234));
	printf("LIBC: Number of Characters Printed: %d \n", printf("LIBC: Testing a decimal number(d): %d in the middle.", 25234));
	printf("\n");

	printf("MINE: Number of Characters Printed: %d \n", b_printf("MINE: Testing a decimal number(d): %d in the middle.", -25234));
	printf("LIBC: Number of Characters Printed: %d \n", printf("LIBC: Testing a decimal number(d): %d in the middle.", -25234));
	printf("\n");

	printf("MINE: Number of Characters Printed: %u \n", b_printf("MINE: Testing a unsigned decimal int number(u): %u in the middle.", 5));
	printf("LIBC: Number of Characters Printed: %u \n", printf("LIBC: Testing a unsigned decimal int number(u): %u in the middle.", 5));
	printf("\n");

	printf("MINE: Number of Characters Printed: %u \n", b_printf("MINE: Testing a unsigned decimal int number(u): %u in the middle.", 25234));
	printf("LIBC: Number of Characters Printed: %u \n", printf("LIBC: Testing a unsigned decimal int number(u): %u in the middle.", 25234));
	printf("\n");

	printf("MINE: Number of Characters Printed: %u \n", b_printf("MINE: Testing a unsigned decimal int number(u): %u in the middle.", -25234));
	printf("LIBC: Number of Characters Printed: %u \n", printf("LIBC: Testing a unsigned decimal int number(u): %u in the middle.", -25234));
	printf("\n");

	printf("MINE: Number of Characters Printed: %d \n", b_printf("MINE: Testing a decimal number(d): %d in the middle.\n", -2147483647));
	printf("LIBC: Number of Characters Printed: %d \n", printf("LIBC: Testing a decimal number(d): %d in the middle.\n", -2147483647));
	printf("\n");

	b_printf("MINE: Testing a decimal number(d): %d in the middle.\n", 5);
	printf("LIBC: Testing a decimal number(d): %d in the middle.\n", 5);
	printf("\n");

	b_printf("MINE: Testing a decimal number(d): %d in the middle.\n", -2147483647);
	printf("LIBC: Testing a decimal number(d): %d in the middle.\n", -2147483647);
	printf("\n");

	b_printf("MINE: Testing a decimal number(d): %d in the middle.\n", 25234);
	printf("LIBC: Testing a decimal number(d): %d in the middle.\n", 25234);
	printf("\n");

	b_printf("MINE: Negative one: %d %i %o %x %u\n", -1, -1, -1, -1, -1);
	printf("LIBC: Negative one: %d %i %o %x %u\n", -1, -1, -1, -1, -1);
	printf("\n");

	b_printf("MINE: Zero check number conversions: %d %i %o %x %u\n", 0, 0, 0, 0, 0);
	printf("LIBC: Zero check number conversions: %d %i %o %x %u\n", 0, 0, 0, 0, 0);
	printf("\n");

	printf("=========== CONVERSION TESTS===========\n");

	b_printf("MINE: Testing %%u 2147483647: %u in the middle.\n", 2147483647);
	printf("LIBC: Testing %%u 2147483647: %u in the middle.\n", 2147483647);
	printf("\n");

	b_printf("MINE: Testing a pointer: %p in the middle.\n", ptr);
	printf("LIBC: Testing a pointer: %p in the middle.\n", ptr);
	printf("\n");

	b_printf("MINE: Testing an octal number(o): %o in the middle.\n", 25234);
	printf("LIBC: Testing an octal number(o): %o in the middle.\n", 25234);
	printf("\n");

	b_printf("MINE: Testing a negative octal number(o): %o in the middle.\n", -25234);
	printf("LIBC: Testing a negative octal number(o): %o in the middle.\n", -25234);
	printf("\n");

	b_printf("MINE: Testing a unsigned int(u): %u in the middle.\n", 25234);
	printf("LIBC: Testing a unsigned int(u): %u in the middle.\n", 25234);
	printf("\n");

	b_printf("MINE: Testing a negative unsigned int(u): %u in the middle.\n", -25234);
	printf("LIBC: Testing a negative unsigned int(u): %u in the middle.\n", -25234);
	printf("\n");

	b_printf("MINE: Testing a hexadecimal number(x): %x in the middle.\n", 25234);
	printf("LIBC: Testing a hexadecimal number(x): %x in the middle.\n", 25234);
	printf("\n");

	return (0);
}