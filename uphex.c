/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   uphex.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 09:55:33 by candace       #+#    #+#                 */
/*   Updated: 2021/12/02 17:55:12 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>
int	uphex(unsigned int n, char *str, int fd)
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
