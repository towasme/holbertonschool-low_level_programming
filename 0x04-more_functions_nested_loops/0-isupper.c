#include "holberton.h"
/**
 *_isupper - checks for upppercase character
 *@c: variable
 *
 *Return: 1 if its uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
		{return(1);
		}
	else
		{return(0);
	}
}
