/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:50:50 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 17:50:50 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void je_putchar(char c)
	{
		write(1,&c,1);
	}
	void je_putnbr(int n)
	{
		if (n == -2147483648)
		{
			write(1,"-2147483648",11);
		return;
		}
		if(n < 0)
		{
			je_putchar('-');
			n = -n;
		}
		if(n >= 10)
		{
			je_putnbr(n / 10);
		}
		je_putchar((n % 10) + '0');
	}
int main()
{
	int vl= 0;

	je_putnbr(vl);
}