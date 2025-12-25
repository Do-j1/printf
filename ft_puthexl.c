/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:52:25 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:31:16 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexl(unsigned long n)
{
	int		c;
	char	*s;

	c = 0;
	s = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 16)
		c += ft_puthexl(n / 16);
	c += ft_putchar(s[n % 16]);
	return (c);
}
