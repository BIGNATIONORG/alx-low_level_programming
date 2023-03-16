#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %ld byte(s)", sizeof(char));
printf("size of an int: %ld bytes(s)", sizeof(int));
printf("Size of a long int: %ld bytes(s)", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)", sizeof(long long int));
printf("Size of a float: %ld bytes(s)", sizeof(float));
return (0);
}
