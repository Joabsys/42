/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:03:16 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/10 09:43:22 by lusampai         ###   ########.fr       */
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

// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>
// int main ()
// {
//     char nome [] = "1c3rc23tr2wscttn\n";
// 	char nome_or [] = "1c3rc23tr2wscttn\n";
//     char sobrenome [] = "tewVFQEAECAETAQ3T746456\n";
// 	char sobrenome_or [] = "tewVFQEAECAETAQ3T746456\n";
//     printf("tamanho do array de caracteres retornado: ");
//     printf("%u\n",ft_strlcat(nome,sobrenome,10));

// 	printf("%s\n",nome);
//     printf("array de caracteres retornado: ");
//     printf("original: strlcat: ");
//     printf("%zu",strlcat(nome_or,sobrenome_or,10));
// 	printf("%s\n",nome_or);
// }
