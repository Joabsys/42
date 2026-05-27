/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:44:11 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:44:11 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ci;
	size_t	cj;

	i = 0;
	j = 0;
	ci = 0;
	cj = 0;
	while (dst[ci] && ci < size)
		ci++;
	while (src[cj] != '\0')
		cj++;
	if (size <= ci)
		return ((cj + size));
	i = ci;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ci + cj);
}
