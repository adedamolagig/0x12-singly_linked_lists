#include <unistd.h>

/*Custome _putchar function to print characters */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
