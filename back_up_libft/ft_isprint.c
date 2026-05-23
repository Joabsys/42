/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:44:57 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:44:57 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
#include <stdio.h>
int main()
{
	char pt = 30;
	if(ft_isprint(pt))
		printf("printavel.");
	else
		printf("Não printavel");
}