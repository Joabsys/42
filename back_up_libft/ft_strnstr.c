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
//O strnstr função localiza a primeira ocorrência da string \c null-terminada pouco na string \c grande, onde não mais do que \c caracteres de lente são pesquisados
// se a string menor estiver vazia retorna string maior.
//se a substrng não for encontrado retorna null.
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
			//while (k[i] && j[p + i] == k[i] verifica se o proximo caracter foi encontrado
			//&& (p + i) < l) Garante que o loop vá ate somente size_t l especificado.
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
# include <stdio.h>
 int main()
{
	size_t v = 4;
	const char *name = "";
	const char *nick = "pote de feijao amarelo";
	const char *result; 

	result = ft_strnstr(nick,name,v);
	printf("%s",result);
}