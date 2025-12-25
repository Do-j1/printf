/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:54:26 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:33:39 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoi(void *p)
{
	int				c;
	unsigned long	addr;

	c = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)p;
	c += write(1, "0x", 2);
	if (addr == 0)
		c += ft_putchar('0');
	else
		c += ft_puthexl(addr);
	return (c);
}
