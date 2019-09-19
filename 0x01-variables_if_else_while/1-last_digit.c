#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n > 5)
{
printf("%d and is greater than 5\n", last);
}
else if (n == 0)
{
printf("%d and is 0\n", last);
}
else
{printf("%d and is less than 6 and not 0\n", last);
}
return (0);
}
