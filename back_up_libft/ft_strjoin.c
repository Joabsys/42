/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 11:42:42 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 11:42:42 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen(const char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0; 
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;
//size != 0 garante  que a proxima conta não ocorra divisão por zero
//(size_t)-1 reprenta o valor maximo de size_t possivel
//count > ((size_t) -1) / size) garante que count(tamanho a ser alocado) 
//não seja maior que o tamanho maximo de memoria disponivel.
	if (size != 0 && count > ((size_t) -1) / size)
		return (NULL);
	total = count * size;
	p = malloc (total);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(*s3) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}

# include <stdio.h>
int main()
{
	char *name = "Joab ";
	char *nick = "Esequiel";
	char *result;
	result = ft_strjoin(name,nick);
	printf("%s",result);
}
