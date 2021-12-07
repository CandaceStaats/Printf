/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unsignedd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 11:50:21 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 14:12:21 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	unsignedd(unsigned int n, int fd)
{
	if (n == 4294967295)
		ft_putstr_fd("4294967295", fd);
	else
	{
		if (n > 9)
		{
			unsignedd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
	return (unsignintlen(n));
}

unsigned int	unsignintlen(unsigned int a)
{
	unsigned int	cnt;

	cnt = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		cnt++;
	while (a != 0)
	{
		a = (a / 10);
		cnt++;
	}
	return (cnt);
}
