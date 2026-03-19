/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-05 14:13:48 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-05 14:13:48 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		s;

	s = 0;
	while (s < size / 2)
	{
		temp = tab[s];
		tab[s] = tab[size - 1 - s];
		tab[size - 1 - s] = temp;
		s++;
	}
}
// #include <stdio.h>
// int main(void)
// {
// 	int i;
// 	i=0;
// 	int		array[]={1,2,3,4};
// 	int 	size;
// 	size = 4;
// 	ft_rev_int_tab(array,size);
// 	while(i<04)
// 	{
// 		printf("%d",array[i]);
// 		i++;
// 	}
// }