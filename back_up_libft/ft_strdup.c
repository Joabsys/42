/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-13 19:03:03 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-13 19:03:03 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	// armazena a quantidade de bytes em copy de acordo com o tamanho de src(sizeof(char) * i + 1)
	copy = malloc (sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// int main()
// {
// 	char *name = "jacob";
// 	ft_strdup(name);
// char *result;
// result = ft_strdup(name);

// write(1,result,5);

// }
