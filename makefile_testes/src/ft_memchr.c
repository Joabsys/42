/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:45:45 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:45:45 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*j;
	size_t				i;

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
