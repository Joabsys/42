/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 13:25:03 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 13:25:03 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//criar uma função que copia a string para outra string

char *je_strcpy(char *dest, char *src)
{
	int i;
	i=0;

	while(src[i]!='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';
	return(dest);
}
#include <unistd.h>
int main()
{
	int i = 0;
	char *nome = "joab";
	char sobrenome []= "";
	je_strcpy(sobrenome,nome);

	while(sobrenome[i] != '\0')
	{
		write(1,&sobrenome[i],1);
		i++;
	}
}