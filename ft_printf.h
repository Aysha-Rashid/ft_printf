/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:52:19 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/16 21:12:09 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_string(char *str);
int		ft_putchar(int c);
int		ft_format(va_list args, const char format);
void	ft_putnbr(int nb);
int		ft_digit(int nb);
int		ft_unint(unsigned int nb);
int		ft_pointer(void *ptr);
int		ft_hexa_x(unsigned int nb);
void	ft_posputnbr(unsigned int nb);
void	ft_hexaputnbr_x(unsigned int nb);
int		ft_hexa_bx(unsigned int nb);
void	ft_hexaputnbr_bx(unsigned int nb);
#endif