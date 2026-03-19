/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-12 16:37:18 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-12 16:37:18 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		print;
	int		signal;
	int		i;

	signal = 1;
	i = 0;
	print = 0;
	while (str[i] == ' ' || (str[i] >= 0 && str[i] <= 31))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signal *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		print = (print * 10) + (str[i] - '0');
		i++;
	}
	return (signal * print);
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char nome[] = " --------12";
// 	printf("%d",ft_atoi(nome));
// }