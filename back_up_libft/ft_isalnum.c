/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:44:15 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:44:15 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>
int main()
{
	int v;
	v = 12;
	char c = 'j';

	ft_isalnum(v);
	ft_isalnum(c);
	if(ft_isalnum(v))
		printf("alfanumerico.");
	else
		printf("numero.");
	if(ft_isalnum(c))
		printf("alfanumerico.");
	else
		printf("numero.");
}
