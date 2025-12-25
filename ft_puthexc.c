/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:45:27 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:31:33 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexc(unsigned long n)
{
	int		c;
	char	*s;

	c = 0;
	s = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 16)
		c += ft_puthexc(n / 16);
	c += ft_putchar(s[n % 16]);
	return (c);
}
