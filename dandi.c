/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dandi.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 12:10:41 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 16:59:39 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	ft_putchar_fd(char c, int fd)
{
	static int	cnt;

	cnt = 0;
	if (fd >= 0)
	{
		write(fd, &c, 1);
		cnt++;
	}
	return (cnt);
}

int	ft_putstr_fd(char *s, int fd)

{
	if (s && fd >= 0)
		write(fd, s, ft_strlen(s));
	return (0);
}

int	ft_strlen(char const *str)

{
	int	cnt;

	cnt = 0;
	while (str[cnt] != 0)
	{
		cnt++;
	}
	return (cnt);
}

int	intlen(int a)
{
	int	cnt;

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

void	dandi(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n == 0)
	{
		ft_putstr_fd("0", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
		{
			dandi(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
