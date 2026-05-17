/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-01 11:11:56 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-01 11:11:56 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// #include <unistd.h>
// int main(void)
// {
// 	int a;
// 	int b;
// 	int c;
// 	int d;
// 	a = 10;
// 	b = 2;
// 	ft_div_mod(a,b,&c,&d);
// 	printf("Divisão de %d por %d é %d\n", a, b,c);
// 	printf("Modulo de %d por %d é %d",a,b,d);
// }
