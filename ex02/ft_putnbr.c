/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:56:17 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/17 18:19:20 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	long	divisor;
	long	temp;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	divisor = 1;
	temp = n;
	while (temp >= 10)
	{
		temp /= 10;
		divisor *= 10;
	}
	while (divisor > 0)
	{
		ft_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
