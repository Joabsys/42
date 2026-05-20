/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:42:50 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:42:50 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0; 
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	if (size != 0 && count > ((size_t) -1) / size)
		return (NULL);
	total = count * size;
	p = malloc (total);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}

# include <stdio.h>
int main(void) 
{ 
	int *v; 
	size_t i; 
	uint64_t element = 1ull*1024ull*1024ull*1024ull;
	v = ft_calloc(1, element);
	 if (!v)
	{ 
		printf("Erro ao alocar memória\n"); return (1);
	}
 	printf("Valores do array:\n"); 
 	i = 0; 
 	while (i < 5) 
	{ 
		printf("v[%zu] = %d\n", i, v[i]); 
		i++; 
	} 	
	free(v);
	return (0);
}


