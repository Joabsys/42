/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-01 10:51:47 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-01 10:51:47 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int main(void)
// {
// int		a;
// int 	b;
// a = 10;
// b = 20;
// ft_swap(&a,&b);
// printf("valor de a: %d valor de b:%d",a,b);
// }