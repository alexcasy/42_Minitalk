/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:56:52 by acasale           #+#    #+#             */
/*   Updated: 2023/07/20 16:01:34 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <signal.h>

void	ft_putcharacter_length(char character, int *length);
void	ft_string(char *args, int *length);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_number(int number, int *length);
void	ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void	ft_unsigned_int(unsigned int u, int *length);
void	ft_pointer(size_t pointer, int *length);
int		ft_printf(const char *string, ...);

struct	s_message {
	int	c;
	int	i;
} g_msg;

#endif
