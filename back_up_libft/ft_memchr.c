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
	char *name1 = "joab";
 	unsigned	char letter1 = 'b';
	unsigned char *result1;
	 result = (unsigned char *)ft_memchr(name,letter,(sizeof(letter))* 4);
	printf("%s", result);
	result1 = (unsigned char *)memchr(name1,letter1,(sizeof(letter1))* 4);
	printf("%s", result1);
 }
