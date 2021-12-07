/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bandersnatch.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 12:38:47 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 18:46:03 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	bandersnatch(const char *format, va_list ap)
{
	int	fd;

	fd = 1;
	if (*format == 'd' || *format == 'i')
		return (middleman(va_arg (ap, int), fd));
	else if (*format == 'c')
		return (chars(va_arg (ap, int), fd));
	else if (*format == 's')
		return (strprint(va_arg(ap, char *), fd));
	else if (*format == 'p')
		return (vp(va_arg(ap, char *), fd));
	else if (*format == 'u')
		return (unsignedd(va_arg(ap, int), fd));
	else if (*format == 'x')
		return (lowhex((unsigned int)va_arg(ap, int), "0123456789abcdef", fd));
	else if (*format == 'X')
		return (uphex((unsigned int)va_arg(ap, int), "0123456789ABCDEF", fd));
	else if (*format == '%')
		return (percent('%'));
	return (0);
}
