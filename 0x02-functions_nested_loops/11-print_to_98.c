#include "holberton.h"
#include <stdio.h>
/**¬
*jack_bauer - prints the sign of a number¬
*¬
*Return: Always¬
*/
void print_to_98(int n)
{
	if (n == 98)
         printf("%d\n", n);

	else if (n <= 97)
	{
		do
		{
			printf("%d, ", n);
			n++;
			if(n == 98) 
				printf("%d", n);
		}
		while(n <=97);
	}
	else if(n > 98)
            {
                do 
                {
                n--;
                if(n != 98)
                { 
                    printf("%d, ", n);
                }
                else
                {  
                    printf("%d", n);
                }
                }
                while(n > 98);
            }
    
}
