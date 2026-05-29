/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 12:53:33 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 12:53:33 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char    *ft_strtrim(const char  *s1, const char *set)
{
	size_t	i;
	char *copy;
    if (!s1 || !set)
		return (NULL);
//fica percorrendo set até não encontrar o caracter passado em *s1
//se encontrar retornar a posição anda com o ponteiro que no caso é *s1++;
    while (*s1 && ft_strchr(set, *s1))
		s1++;
    i = ft_strlen(s1);
    //depois que i recebe o tamanho de s1 fazemos a chamada de strchr novamente
    //mas agora localizando set do final par ao inicio.
    while (i && ft_strchr(set, s1[i]))
		i--;
    copy = ft_substr(s1, 0, i + 1);
    return (copy);
}

int main()
{
    char *name;
    char *nick;
    name = "joab";
    nick = "jb";
    char *result;
    result = ft_strtrim(name,nick);
    write(1,result,3);
}