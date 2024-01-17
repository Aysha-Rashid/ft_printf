/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadeci.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:27:52 by ayal-ras          #+#    #+#             */
/*   Updated: 2024/01/05 15:20:40 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexaputnbr_x(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_hexaputnbr_x(nb / 16);
		ft_hexaputnbr_x(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar (nb % 10 + '0');
		else
			ft_putchar (nb - 10 + 'a');
	}
}

int	ft_hexa_x(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	ft_hexaputnbr_x((unsigned int )nb);
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

void	ft_hexaputnbr_bx(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_hexaputnbr_bx(nb / 16);
		ft_hexaputnbr_bx(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar (nb % 10 + '0');
		else
			ft_putchar (nb - 10 + 'A');
	}
}

int	ft_hexa_bx(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	ft_hexaputnbr_bx((unsigned int )nb);
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}
