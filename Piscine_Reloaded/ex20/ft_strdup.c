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

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
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
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *nome = "joab";
//     char *copy = ft_strdup(nome);
//     char *copyy = strdup(nome);
//     if (copy == NULL || copyy ==NULL)
//         return (0);
//     if(copy != NULL || copyy != NULL)
// 	{
//         printf("%s\n",copy);
//         printf("%s\n",copyy);
// 	}
// }