/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:48:46 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:48:46 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	// explicando while s1[i] && s2[i] for verdadeiro e s1[i] == s2[i] e i < n - 1 o i incrementa.
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

# include <stdio.h>
int main()
{
	char *name = "maria";
	char *nick  = "raria";
	size_t v= 4;
	int result;

	result = ft_strncmp(name,nick,v);
	printf("%d",result);
}
