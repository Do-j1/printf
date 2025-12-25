/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:38:45 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:44:16 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putarg(char s, va_list args)
{
	if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (s == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (s == 'p')
		return (ft_putpoi(va_arg(args, void *)));
	if (s == 'x')
		return (ft_puthexl(va_arg(args, unsigned int)));
	if (s == 'X')
		return (ft_puthexc(va_arg(args, unsigned int)));
	if (s == 'u')
		return (ft_putui(va_arg(args, unsigned int)));
	if (s == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		con;
	va_list	args;

	i = 0;
	con = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			con += putarg(s[i], args);
		}
		else
			con += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (con);
}
