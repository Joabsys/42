/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:48:56 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:48:56 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *j, const char *k, size_t l)
{
	size_t	p;
	unsigned int	i;

	if (!*k)
		return ((char *)j);
	p = 0;
	while (j[p] && p < l)
	{
		if (j[p] == k[0])
		{
			i = 1;
			while (k[i] && j[p + i] == k[i]
				&& (p + i) < l)
				i++;
			if (k[i] == '\0')
				return ((char *)&j[p]);
		}
		p++;
	}
	return (NULL);
}
