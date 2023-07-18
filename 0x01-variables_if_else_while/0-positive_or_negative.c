#include <stdlib.h>
#include <time.h>
/**
 * main - more headers goes there
 * betty style doc for function main goes there
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
