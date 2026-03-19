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

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	negativo = 'N';
	positivo = 'P';
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
		write(1, &positivo, 1);
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
// 	write(1, &virgula, 1);
// }