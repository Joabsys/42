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

# include <string.h>
# include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen((char*)s);
	while (i >= 0)
	{
		if (last[i] == find)
			return (&last[i]);
		i--;
	}
	return (NULL);
}
# include <stdio.h>
 int main()
{
	char *name = "joab esequiel";
	const char nick = 'j';
	char *r;
	char *r2;
	r = ft_strrchr(name,nick);
	r2 = strrchr(name,nick);
	printf("%s\n",r);
	printf("%s",r2);
}
