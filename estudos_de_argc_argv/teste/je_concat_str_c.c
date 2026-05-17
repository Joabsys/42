/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_concat_str_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 14:35:55 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 14:35:55 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *je_concat_str_c(char *dest, char *src, int size)
{
	int j;
	int i;
	j = 0;
	i = 0;
	while(dest[i]!='\0')
		i++;
	while(src[j]!='\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i]='\0';
	return (dest);
}
#include <unistd.h>
int main()
{
	int i;
	i = 0;
	int size = 3;
	char nome[14]="joab ";
	char sobrenome[]="esequiel";
	je_concat_str_c(nome,sobrenome,size);
	while(nome[i]!='\0')
	{
		write(1,&nome[i],1);
		i++;
	}
}