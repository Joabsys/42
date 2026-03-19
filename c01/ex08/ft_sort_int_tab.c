/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-07 22:04:34 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-07 22:04:34 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-07 22:04:34 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-07 22:04:34 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		aux;

	aux = 0;
	j = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[i])
			{
				aux = tab[j];
				tab[j] = tab[i];
				tab[i] = aux;
			}
			j++;
		}
		i++;
	}
}
// #include <stdio.h>
// int main(void)
// {
//     int p;
//     p=0;
//     int array[] = {1,8,5,3,0};
//     ft_sort_int_tab(array,5);
//     while(p<5)
// 	{
// 		printf("%d",array[p]);
// 		p++;
// 	}
// }