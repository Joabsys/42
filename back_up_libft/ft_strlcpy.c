/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:48:27 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:48:27 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	i;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size == 0)
		return (srclen);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
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