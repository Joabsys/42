/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-21 20:57:46 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-21 20:57:46 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ci;
	unsigned int	cj;

	i = 0;
	j = 0;
	ci = 0;
	cj = 0;
	while (dest[ci] && ci < size)
		ci++;
	while (src[cj] != '\0')
		cj++;
	if (size <= ci)
		return ((cj + size));
	i = ci;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ci + cj);
}
#include <stdio.h>
int main()
{
	char name[20] = "joab ";
	char nickname[] = "esequiel";
	unsigned int i;
	i = 0;

	ft_strlcat(name, nickname, 14);

	printf("%s",name);
}