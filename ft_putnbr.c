/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 11:39:51 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:21:03 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
	{
		c += ft_putchar('-');
		c += ft_putchar('2');
		c += ft_putnbr(147483648);
		return (c);
	}
	if (n < 0)
	{
		c += ft_putchar('-');
		c += ft_putnbr(-n);
	}
	else
	{
		if (n >= 10)
			c += ft_putnbr((n / 10));
		c += ft_putchar((n % 10) + '0');
	}
	return (c);
}
