/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:49:04 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:49:04 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = NULL;// last é NULL porque se não encontrar o char a função deve retornar NULL
	find = (unsigned char)c;
	i = 0;
	while (s[i]!= '\0')
	{
		if (s[i] == find)// verifica a ultima ocorrencia de find e add ela em last
			last = ((char *)&s[i]);
		i++;
	}
	if(find =='\0')
		return ((char *)&s[i]);
	return (last);
}
# include <stdio.h>
 int main()
{
	char *name = "joab esequiel";
	const char nick = '\0';
	char *r;
	char *r2;
	r = ft_strrchr(name,nick);
	r2 = strrchr(name,nick);
	printf("%s\n",r);
	printf("%s",r2);
}
