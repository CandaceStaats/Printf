/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lowhex.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 08:26:56 by candace       #+#    #+#                 */
/*   Updated: 2021/12/02 18:44:21 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	lowhex(unsigned long n, char *str, int fd)
{
	int	index;

	if (n == 0)
	{
		ft_putstr_fd("0", fd);
		return (1);
	}
	if (n < 0)
		n = INT_MAX;
	if (n / 16 > 0)
	{
		lowhex(n / 16, str, fd);
	}
	index = n % 16;
	ft_putchar_fd(str[index], fd);
	return (hexlen(n));
}

int	hexlen(unsigned long a)
{
	int	cnt;

	cnt = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		cnt++;
	while (a != 0)
	{
		a = (a / 16);
		cnt++;
	}
	return (cnt);
}
