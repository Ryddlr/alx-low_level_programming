#include <stdio.h>
/**
 *main - program that print the name of the file it was compiled from
 *Return: 0
 */
int main(void)
{
		printf("%s\n", __FILE__);
		return (0);
}
