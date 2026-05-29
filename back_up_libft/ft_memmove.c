/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:45:21 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:45:21 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdio.h>
# include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	unsigned char	*d;
	unsigned char	*s;
	size_t	i;

	if (!dst && !src)
		return (NULL);

	d = (unsigned char *)dst;
	s = ( unsigned char *)src;
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
	{
		i = 0;
		 while (i < len)
		{
		d[i] = s[i];
		i++;
		}
	}
	return (dst);
}

 int main(void)
 {
	// char src[] = "hello World";
	// char dst[20];
	// ft_memmove(dst,src,13);
	// printf("Copia simples %s",dst);
	char over1[] = "hello world";
	ft_memmove(over1 + 2 ,over1, 10);
	printf("%s",over1);
	// char over2[] = "hello world";
	// 	memmove(over2 + 2, over2, 10);
	//  printf("\n%s", over2);
 }
