#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything
* @format: Constant pointer to the first argument
*/
void print_all(const char * const format, ...)
{
	int i, x;
	char *string;
	va_list param;

	va_start(param, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				x = 0;
				printf("%c", va_arg(param, int));
				break;
			case 'i':
				x = 0;
				printf("%d", va_arg(param, int));
				break;
			case 'f':
				x = 0;
				printf("%f", va_arg(param, double));
				break;
			case 's':
				x = 0;
				string = va_arg(param, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s", string);
				break;
			default:
				x = 1;
				break;
		}
			if (format[i + 1] != '\0' && x == 0)
				printf(", ");
		i++;
	}
	printf("\n");
	va_end(param);
}
