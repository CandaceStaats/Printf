/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 12:15:12 by cstaats       #+#    #+#                 */
/*   Updated: 2021/11/24 12:56:43 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			ret += bandersnatch(format + 1, ap);
			format = format + 2;
			continue ;
		}
		write(1, format, 1);
		format++;
		ret++;
	}	
	va_end(ap);
	return (ret);
}
