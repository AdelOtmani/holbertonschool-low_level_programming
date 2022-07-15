#include <stdio.h>
void __attribute__((constructor)) hareandturtle();
/**
 * hareandturtle - Print the code
 */
void hareandturtle(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
