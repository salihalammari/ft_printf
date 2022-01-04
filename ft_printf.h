/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:04:11 by slammari          #+#    #+#             */
/*   Updated: 2022/01/02 18:30:06 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putuphex(unsigned int nb, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putpointer(unsigned long long nb, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putlowhex(unsigned int nb, int *len);
void	ft_putchar(char c, int *len);
void	ft_put_unsigned_int(unsigned int nb, int *len);

#endif
