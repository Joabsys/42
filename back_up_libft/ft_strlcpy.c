/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:44:04 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:44:04 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	k;

	j = 0;
	k = 0;
	while (src[j])
		j++;
	while(dst[k])
		k++;
	if (size == 0)
		return (j);

	i = 0;
	if(k > j)
	{
		while (src[i] && i < (size - 1))
			{
				dst[i] = src[i];
				i++;
			}
		dst[i] = '\0';
	}
	
	else
	{
		while(dst[k])
			dst[k] = k - 1;
	}
	return (j);
}


#include <unistd.h>
#include <stdio.h>
int main()
{
	unsigned int size;
	char name[20]= "maria";
	const char nickname[] = " do bairro"; 
	unsigned int i;
	int bold;
	bold = 0;
	i=0;
	size = ft_strlcpy(name,nickname,8);

	while(i < size)
	{
		write(1,&name[i],1);
		i++;
	}
	printf("Tamanho%d",size);
}