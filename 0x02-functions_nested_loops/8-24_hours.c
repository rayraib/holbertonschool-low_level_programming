#include "holberton.h"
/**
* jack_bauer - Prints every minute of the day 00:00 to 23:59
* Return: Succes 0
*/
void jack_bauer(void)
{
	char hour;
	char min;

	hour = 0;
	while (hour < 24)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	hour++;
	}
}
