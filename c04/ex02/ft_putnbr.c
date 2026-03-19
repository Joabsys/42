/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-12 11:43:52 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-12 11:43:52 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}
// int main()
// {
// 	int str = -2147483648;
// 	int str1 = -42;
// 	int str2 = 123;

// 	ft_putnbr(str);
// 	write(1,"\n",1);
// 	ft_putnbr(str1);
// 	write(1,"\n",1);
// 	ft_putnbr(str2);
// 	write(1,"\n",1);
// }