/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:06:05 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/22 14:00:11 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <stdarg.h>

ft_format(va_list args, const char format)
{
	int	result;

	result = 0;
	if (format == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (format == '%')
		result = ft_putchar('%');
	else if (format == 's')
		result = ft_string(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		result = ft_digit(va_arg(args, int));
	else if (format == 'u')
		result = ft_unint(va_arg(args, unsigned int));
	else if (format == 'p')
		result = ft_pointer(va_arg(args, void *));
	else if (format == 'x')
		result = ft_hexa_x(va_arg(args, unsigned int));
	else if (format == 'X')
		result = ft_hexa_bx(va_arg(args, unsigned int));
	else
		result = ft_putchar('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		written_chars;
	int		i;

	i = 0;
	written_chars = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			written_chars += ft_format(args, format[i + 1]);
			i++;
		}
		else
		{
			written_chars += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (written_chars);
}

// int main()
// {
// 	// int lenght;
// 	// char sr[] = "hgfhfg";
// 	// char sr1[] = "HEHJHSDG";
// 	// char *str;
// 	// lenght = ft_strlen(sr);
// 	// printf("%d\n", length);
// 	ft_printf("%", 0, "s");
// 	printf("%", 0, "s");
//    // ft_printf("%u\n",-5287287);
// //	printf("%d\n", 5287287);
// 	 // Pass a character 'h' instead of "h"
//     // return 0; // Add a return statement
// }
//  A va_list is simply a pointer into the stack, and 
//va_arg just adds the size of the type to be retrieved to the va_list,
// and returns the old value