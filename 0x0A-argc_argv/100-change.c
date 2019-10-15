#include <stdio.h>
#include <stdlib.h>
/**
 *main - concatenates two strings
 *@argc: pointer string
 *@argv: pointer destination
 *Return: Always
 */

int main(int argc, char *argv[])
{

int cents = 0;
int sum;

	if (argc != 2)
		{
		printf("Error\n");
		return (1);
		}
	else
		{
		sum = atoi(argv[1]);
		while (sum >= 25)
			{
			sum -= 25;
			cents++;
			}
		while (sum >= 10)
			{
			sum -= 10;
			cents++;
			}
		while (sum >= 5)
			{
			sum -= 5;
			cents++;
			}
		while (sum >= 2)
			{
			sum -= 2;
			cents++;
			}
		while (sum >= 1)
			{
			sum -= 1;
			cents++;
			}
		}
		printf("%d\n", cents);
	return (0);
}
