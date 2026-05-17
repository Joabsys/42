/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blima-ha <blima-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 13:57:37 by jwillian          #+#    #+#             */
/*   Updated: 2026/03/01 18:35:49 by blima-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	print_hf(int x);
void	print_middle(int x);
//void	validacao(int x, int y);

void	rush(int x, int y)
{
	int	column_x;
	int	line_y;

	column_x = 1;
	line_y = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Valores inválidos!", 19);
	}
	while (column_x <= x && line_y <= y)
	{
		while (line_y == 1 || line_y == y)
		{
			print_hf(x);
			line_y++;
		}
		while (line_y < y)
		{
			print_middle(x);
			line_y++;
		}
	}
}

void	print_hf(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_middle(int x)
{
	int	j;

	j = 0;
	ft_putchar('|');
	while (j < x - 2)
	{
		ft_putchar(' ');
		j++;
	}
	if (x != 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}
