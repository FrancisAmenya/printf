#include "main.h"
/**
 * putsmychar - print a character value
 * @c: char input to process
 * Return: 1
 */
int putsmychar(char c)
{
return (write(1, &c, 1));
}
