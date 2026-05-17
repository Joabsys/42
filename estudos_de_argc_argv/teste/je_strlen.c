/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:27:23 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 17:27:23 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int je_strlen(char *str)
{ int 	i;
	i = 0;
	while (str[i]!='\0')
	{
		i++;
	}
	return(i);
}

#include <unistd.h>
int main()
{
	int		j;
	j = 0;
	char l;
	char *nome="joab";
	int c = je_strlen(nome);
	l = (c % 10) + '0';
	write(1,&l,1);
	
	

}
