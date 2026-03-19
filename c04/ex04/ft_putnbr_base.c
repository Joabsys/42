/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-14 12:05:07 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-14 12:05:07 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	size(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	vl_base(char *base)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	if (size(base) < 2)
		return (0);
	while (base[j])
	{
		if (base[j] == '+' || base[j] == '-'
			|| (base[j] >= 0 && base[j] <= 32))
			return (0);
		k = j + 1;
		while (base[k])
		{
			if (base[j] == base[k])
				return (0);
			k++;
		}
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		l;

	n = 0;
	l = 0;
	if (!vl_base(base))
		return ;
	l = size(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= l)
		ft_putnbr_base(n / l, base);
	write (1, &base[n % l], 1);
}
// #include <stdio.h>
// int main()
// {
// 	char hexadecimal []= "0123456789abcdef";
// 	char decimal[] ="0123456789";
// 	char octal[] = "poneyvif";
// 	char binaria[] ="10";
// 	write(1,"Base hexadecimal: ",18);
// 	ft_putnbr_base(42,hexadecimal);
// 	write(1,"\n",1);
// 	write(1,"base decimal: ",14);
// 	ft_putnbr_base(42,decimal);
// 	write(1,"\n",1);
// 	write(1,"base octal: ",12);
// 	ft_putnbr_base(42,octal);
// 	write(1,"\n",1);
// 	write(1,"base binária: ",14);
// 	ft_putnbr_base(42,binaria);
// }