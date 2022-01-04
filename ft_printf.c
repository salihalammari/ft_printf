/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:03:35 by slammari          #+#    #+#             */
/*   Updated: 2022/01/02 18:29:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(char *s, va_list valist, int *len, int i)
{
	if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(valist, int), len);
	if (s[i] == 'c')
		ft_putchar(va_arg(valist, int), len);
	if (s[i] == 's')
		ft_putstr(va_arg(valist, char *), len);
	if (s[i] == '%')
		ft_putchar('%', len);
	if (s[i] == 'x')
		ft_putlowhex(va_arg(valist, unsigned int), len);
	if (s[i] == 'X')
		ft_putuphex(va_arg(valist, unsigned int), len);
	if (s[i] == 'p')
	{
		write (1, "0x", 2);
		*len += 2;
		ft_putpointer(va_arg(valist, unsigned long long), len);
	}
	if (s[i] == 'u')
		ft_put_unsigned_int(va_arg(valist, unsigned int), len);
}
int	ft_printf(const char *s, ...)
{
	int			i;
	va_list		valist;
	int			len;

	i = 0;
	len = 0;
	va_start(valist, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_print((char *)s, valist, &len, i);
		}
		else
			ft_putchar(s[i], &len);
		i++;
	}
	va_end(valist);
	return (len);
}

int main()
{
	char *str = "saliha";
	ft_printf("%p", str);
}