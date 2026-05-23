/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:45:39 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:45:39 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <string.h>
#include "libft.h"
//copia cegamente os dados se se importar quais são pois isso o tipo void na implementação
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
# include <stdio.h>
int main()
{
	char p[] = "do bairro";
	char q[] = "do bairro";
	char *j = "maria";
	char *l = "maria";
	int i;
	i=0;
	ft_memcpy(p,l,6);
	memcpy(q,j,6);
		printf("%s\n",&p[i]);
		printf("%s\n",&q[i]);
}
