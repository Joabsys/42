/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-26 22:56:21 by jesequie          #+#    #+#             */
/*   Updated: 2026-02-26 22:56:21 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter <= 'z' && letter >= 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
}
// int main (void)
// {
// 	ft_print_reverse_alphabet();
// 	return(0);
// }