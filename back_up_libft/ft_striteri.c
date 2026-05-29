/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 18:14:04 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-28 18:14:04 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

// static void to_upper(unsigned int i, char *c)
// {
// 	(void)i;
//     if( *c >= 97 && *c <= 122)
//         *c += -32;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))// A função recebi um array de char e uma  função com ponteiro
// que possue um int e array de char.
{
	unsigned int	j;

	j = 0;
	while (s[j])
	{
		f(j, &s[j]);
		j++;
	}
}
// #include <stdio.h>
// int main(void)
// {
// 	char name[] = "joab";
// 	ft_striteri(name,to_upper);
// 	printf("%s",name);
// }