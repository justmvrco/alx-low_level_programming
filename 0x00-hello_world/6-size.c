#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints sizes of data types in bytes
 * Return: 0
 */
int main(void)
{
char char_type;
int int_type;
long int int_long_type;
long long int int_long_long_type;
float float_type;

printf("Size of a char: %lu byte(s)\n", sizeof(char_type));
printf("Size of an int: %lu byte(s)\n", sizeof(int_type));
printf("Size of a long int: %lu byte(s)\n", sizeof(int_long_type));
printf("Size of a long long int: %lu byte(s)\n", sizeof(int_long_long_type));
printf("Size of a float: %lu byte(s)\n", sizeof(float_type));
return (0);
}
