#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %ld byte(s)\n", sizeof(char));
printf("size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
printf("Size of a float: %ld bytes(s)", sizeof(float));
return (0);
}
