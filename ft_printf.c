/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:19:34 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/19 11:19:34 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			if (s[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (s[i] == 'c')
				ft_putchar_fd((char)va_arg(args, int), 1);
			else if (s[i] == 'd' || s[i] == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
		}
		else
		{
			ft_putchar_fd(s[i], 1);
		}
		i++;
	}
}
