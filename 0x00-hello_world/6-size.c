#include <stdio.h>
/**
  * main - A program that prints vaious computer types
  * Return: 0 (Succes)
  */
int main(void)
{
printf("Size of a char:	%lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a long int: %lu byte(s)\n", sizeof(float));
return (0);
}
