/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 11:28:52 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-16 11:28:52 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		j;
	int		k;

	k = 0;
	j = 1;
	if (nb < 0)
		return (0);
	while (k < nb)
	{
		k = j * j;
		j++;
	}
	if (k != nb)
		return (0);
	return (j - 1);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_sqrt(2));
// }