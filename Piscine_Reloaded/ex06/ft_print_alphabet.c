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

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
// int main(void)
// {
//     ft_print_alphabet();
// 	return (0);

// }
