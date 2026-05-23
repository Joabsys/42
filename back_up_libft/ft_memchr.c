/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:45:09 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:45:09 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//return ((void *)sc + i) aritimetica de bytes. retormando o ponteiro a partir dos bytes contados
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*j;
	size_t		i;

	j = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (j[i] == (unsigned char)c)
			return ((unsigned char *) &j[i]);
		i++;
	}
	return (NULL);
}

# include <stdio.h>
 int main ()
 {
	char *name = "joab";
 unsigned	char letter = 'b';
	 unsigned char *result;
	 result = (unsigned char *)ft_memchr(name,letter,(sizeof(letter))* 4);
	printf("%s", result);
 }