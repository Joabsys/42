/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:43:41 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:43:41 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t l)
{
	size_t	p;
	size_t	i;

	if (!*small)
		return ((char *)big);
	p = 0;
	while (big[p] && p < l)
	{
		if (big[p] == small[0])
		{
			i = 1;
			while (small[i] && big[p + i] == small[i]
				&& (p + i) < l)
				i++;
			if (small[i] == '\0')
				return ((char *)&big[p]);
		}
		p++;
	}
	return (NULL);
}
