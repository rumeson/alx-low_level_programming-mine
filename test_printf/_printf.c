#include <stdarg.h>
#include "main.h"

int _printf(char* fmt,...)
{
        char *traverse;
/*        unsigned int i;*/
        int len = 0;
        char *length;
	va_list arg;

        length = fmt;
        while (*length != '\0')
        {
                len++;
                length++;
        }

        va_start(arg, fmt);
        traverse = fmt;
        for (traverse = fmt; *traverse != '\0'; )
        {
                while (*traverse != '\0' && *traverse != '%')
                {
                        _putchar(*traverse);
                        traverse++;
                }
		traverse++;

		switch(*traverse)
			{
				case 'd' : _putchar('d');
					break;
				case 'i' : _putchar('i');
					break;
			}
        }

        va_end(arg);

        return (len);
}
