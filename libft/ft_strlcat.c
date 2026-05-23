/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:48:00 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:48:00 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ci;
	unsigned int	cj;

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
