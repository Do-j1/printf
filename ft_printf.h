/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-ali <dal-ali@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:03:40 by dal-ali           #+#    #+#             */
/*   Updated: 2025/12/25 15:32:05 by dal-ali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int	ft_putstr(char *s);
int	ft_putui(unsigned int n);
int	ft_putpoi(void *p);
int	ft_putnbr(int n);
int	ft_puthexl(unsigned long n);
int	ft_puthexc(unsigned long n);
int	ft_putchar(char c);
int	ft_printf(const char *s, ...);

#endif
