/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-14 11:14:36 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-14 11:14:36 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		k;
	int		i;
	int		*ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	k = max - min;
	ptr = malloc(k * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
// #include <stdio.h>
// int main(void)
// {
// 	int		i;
// 	i = 1;
// 	int *j_array;
// 	if(ft_range(100,250) == NULL)
// 		return (0);
// 	j_array = ft_range(100,250);
// 	while(j_array[i] <= 250)
// 	{
// 		printf("%d\n",j_array[i]);
// 		i++;
// 	}
// }
