/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-14 20:56:05 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-14 20:56:05 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int 	i;
	int		j;
	j = 0;
	i = 0;
	if(argc < 2)
	{
		return (0);
	}
	while(i > argc)
	{
		j = 0;
		while(argv[j])
		{
			write(1,&argv[j],1);
			argv[j]++;
		}
		i++;
	}
}