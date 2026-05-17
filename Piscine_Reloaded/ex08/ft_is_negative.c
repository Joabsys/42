/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 20:24:54 by jesequie          #+#    #+#             */
/*   Updated: 2026-02-27 20:24:54 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	negativo = 'N';
	positivo = 'P';
	if (n < 0)
	{
		ft_putchar(negativo);
	}
	else
		ft_putchar(positivo);
}
// int main (void)
// {
// 	char	virgula;

// 	virgula = ',';
// 	ft_is_negative(-1);
// 	write(1, &virgula, 1);	
// 	ft_is_negative(1);
// 	write(1, &virgula, 1);
// 	ft_is_negative(-1);
// }