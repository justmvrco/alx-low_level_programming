#include <stdio.h>
/**
 * main - Prints string
 * Decricription: Prints sizes of data types in bytes
 * Return: 0
 */
int main(void)
{
char ctype;
int andre;
long int moreira;
long long int marco;
float andrea;
printf("Size of a char: %lu byte(s)\n", sizeof(ctype));
printf("Size of a int: %lu byte(s)\n", sizeof(andre));
printf("Size of a long int: %lu byte(s)\n", sizeof(moreira));
printf("Size of a long long int: %lu byte(s)\n", sizeof(marco));
printf("Size of a float: %lu byte(s)\n", sizeof(andrea));
return (0);
}
