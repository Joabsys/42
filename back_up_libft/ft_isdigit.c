/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:44:51 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:44:51 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int main()
{
	int v;
	v=0;
	if(ft_isdigit(v))
		printf("é um numero da tabela ascii");
	else
		printf("Não é numero da tabela ascii");

}