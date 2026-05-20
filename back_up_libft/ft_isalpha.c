/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:44:27 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:44:27 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

#include <stdio.h>
int main()
{
	char l = 'j';
	char k = '\\';

 if (ft_isalpha(l))
	printf("é alphanumerico\n");
 else
 	printf(" não é alphanumerico ");
if (ft_isalpha(k))
	printf("é alphanumerico");
 else
 	printf(" não é alphanumerico ");
}
