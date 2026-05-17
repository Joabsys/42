/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int ft_recursive_factorial(int nb)                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 19:16:37 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 19:16:37 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	else
		return (1);
	return (nb);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d",ft_recursive_factorial(0));
// }
