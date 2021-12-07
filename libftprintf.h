/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <cstaats@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 12:43:07 by cstaats       #+#    #+#                 */
/*   Updated: 2021/12/02 18:38:40 by cstaats       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}				t_list;
void			dandi(int n, int fd);
int				ft_putchar_fd(char c, int fd);
int				ft_putstr_fd(char *s, int fd);
int				ft_strlen(char const *str);
int				percent(char a);
int				bandersnatch(const char *format, va_list ap);
int				ft_printf(const char *format, ...);
unsigned int	unsignedd(unsigned int n, int fd);
int				intlen(int a);
int				middleman(int n, int fd);
unsigned int	unsignintlen(unsigned int a);
int				chars(char c, int fd);
int				strprint(char *s, int fd);
int				lowhex(unsigned long n, char *str, int fd);
int				hexlen(unsigned long a);
int				uphex(unsigned int n, char *str, int fd);
int				vp(void *ptr, int fd);
#endif