#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - gets lst digits 
 *
 * Return:always return 0
 * */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if ( lastn > 5 )
{
printf("Last digit of %d is %d and is greater than 5", n, lastn);
}
else if ( lastn == 0 )
{
printf("Last digit of %d is %d and is 0", n, lastn);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
