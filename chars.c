/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   chars.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 12:30:28 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 17:19:04 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int	chars(char c, int fd)
{
	int	cnt;

	cnt = 0;
	write(fd, &c, 1);
	cnt++;
	return (cnt);
}
