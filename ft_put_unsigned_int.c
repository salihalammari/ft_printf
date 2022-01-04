/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:04:39 by slammari          #+#    #+#             */
/*   Updated: 2022/01/02 18:30:46 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_int(unsigned int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + 48, len);
	else
	{
		ft_put_unsigned_int(nb / 10, len);
		ft_put_unsigned_int(nb % 10, len);
	}
}
