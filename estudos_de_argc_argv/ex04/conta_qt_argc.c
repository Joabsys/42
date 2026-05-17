/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conta_qt_argc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 13:24:10 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 13:24:10 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int		j;
	char	c;
	j = 0;
	while (j < argc)
	{
		j++;

	}
	write(1,"argumentos contados; ",21);
	c = j +'0';
	write(1,&c,1);
}