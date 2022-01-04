/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:09:30 by slammari          #+#    #+#             */
/*   Updated: 2022/01/02 18:32:53 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putuphex(nb / 16, len);
		ft_putuphex(nb % 16, len);
	}
}
