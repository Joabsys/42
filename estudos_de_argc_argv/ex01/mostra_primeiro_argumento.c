/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mostra_primeiro_argumento.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 11:35:25 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 11:35:25 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int 	j;
	int		k;

	j = 1;
	k = 0;
	while (j < argc)
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			
			write (1, &argv[j][k],1);
			write(1,"\n",1);
			k++;
		}
		j++;
		write(1," ",1);
	}

}