/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 18:46:36 by jesequie          #+#    #+#             */
/*   Updated: 2026-02-27 18:46:36 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers >= '0' && numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

// int main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
