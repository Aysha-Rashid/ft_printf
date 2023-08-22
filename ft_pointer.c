/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:51:46 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/18 13:33:54 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_func(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_pointer_func(nb / 16);
		ft_pointer_func(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar (nb % 10 + '0');
		else
			ft_putchar (nb - 10 + 'a');
	}
}

int	ft_pointer(void *ptr)
{
	int					len;
	unsigned long long	nb;

	nb = (unsigned long long) ptr;
	len = 0;
	write(1, "0x", 2);
	ft_pointer_func(nb);
	if (nb == 0)
	{
		len++;
	}
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len + 2);
}

// int main()
// {
//     int a = 42; // Example integer value
//     printf("%d\n", ft_pointer(&a));
//     printf("%p", &a);
//     return 0;
// }