/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vp.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 09:59:52 by candace       #+#    #+#                 */
/*   Updated: 2021/12/02 18:27:35 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	vp(void *ptr, int fd)
{
	unsigned long	a;

	ft_putstr_fd("0x", fd);
	a = (unsigned long)ptr;
	if (a == 0)
	{	
		ft_putchar_fd('0', fd);
		return (3);
	}
	lowhex(a, "0123456789abcdef", fd);
	return (hexlen(a) + 2);
}
