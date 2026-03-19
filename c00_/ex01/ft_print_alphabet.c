/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-26 17:45:03 by jesequie          #+#    #+#             */
/*   Updated: 2026-02-26 17:45:03 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
// int main(void)
// {
//     ft_print_alphabet();
// 	return (0);

// }
