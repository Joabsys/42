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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needle)
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] && (size_t)pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[pos + i] == needle[i]
				&& (size_t)(pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (NULL);
}
