/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mostra_ultimo_argumento.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 12:41:02 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 12:41:02 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int		j;

	j = 0;
	while(argv[argc -1 ][j] != '\0')
	{
		write(1,&argv[argc - 1][j],1);
		j++;
	}
}