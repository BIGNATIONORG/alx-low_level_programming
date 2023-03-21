#include "main.h"
/**
* _islower - shows 1 if if input is a
* lower case character. Another cases shows
* 0
* @c: The character is ASCII code
*
* Return: 1 for lowercases character. 0 for the rest.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
