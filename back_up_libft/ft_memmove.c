/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:46:00 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:46:00 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{	char	*d;
	char	*f;
	int	i;

	if (!dst && !src)
		return (NULL);

	d = (char *)dst;
	f = (char *)src;
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			d[i] = f[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			d[i] = f[i];
			i++;
		}
	}
	return (dst);
}
#include <stdio.h>
 int main(void)
 {
	// char src[] = "hello World";
	// char dst[20];

	// ft_memmove(dst,src,13);
	// printf("Copia simples %s",dst);
	char over1[] = "hello world";
	ft_memmove(over1 + 2 ,over1, 10);
	printf("\n%s",over1);
	char over2[] = "hello world";
		memmove(over2 + 2, over2, 10);
	 printf("\n%s", over1);
 }
