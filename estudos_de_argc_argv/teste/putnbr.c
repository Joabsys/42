/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 12:14:08 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 12:14:08 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void put_char(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int number)
{
	if(number == -2147483648)
		write(1,"-2147483648",11);
	if(number < 0)
	{
		put_char('-');
		number = -number;
	}

	if(number >= 10)
		ft_putnbr(number / 10);
	put_char((number % 10) + '0');
	
}
int main()
{
int vl;
vl = 0;
ft_putnbr(1000);
}