/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv_todos_argumentos.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 11:09:03 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 11:09:03 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//mostra todos os argumentos programa e array ex ./a.out e teste
int main(int argc, char **argv)
{
	int		i;
	int 	j;

	i = 0;
	j = 0;
	while(i < argc)
	{
		j=0;// para começar do zero do proximo array de string e imprimi-lo
		while(argv[i][j])
		{
			write(1,&argv[i][j],1);
			j++;
		}
		i++;//apos imprimr o 1° argumento a posição muda para o proximo argumento.
		write(1," ",1);//para colocar um espaço entre os argumentos impressos.
	}
}