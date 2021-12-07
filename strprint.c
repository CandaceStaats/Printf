/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strprint.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 13:35:49 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 13:49:20 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	strprint(char *s, int fd)
{
	if (s == NULL)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	if (s && fd >= 0)
		write(fd, s, ft_strlen(s));
	return (ft_strlen(s));
}
