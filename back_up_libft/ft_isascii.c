/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:44:44 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:44:44 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// int main()
// {
// 	int v;

// 	v = 127;
	
// 	if(ft_isascii(v))
// 		printf("pertence a tabela ascii");
// 	else
// 		printf("Não pertence a tabela ascii");
// }