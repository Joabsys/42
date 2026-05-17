/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_concat_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 13:44:54 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 13:44:54 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *je_concat_srt(char *dest, char *src)
{
	int i;
	i = 0;
	int j;
	j = 0;
	while(dest[i])
		i++;
	while(src[j]!='\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i]='\0';
	return(dest);
}
#include <unistd.h>
int main()
{
	int j;
	j = 0;
	char nome[14]="joab ";
	char sobrenome[]="esequiel";
	je_concat_srt(nome,sobrenome);
	while(nome[j]!='\0')
	{
		write(1,&nome[j],1);
		j++;
	}
}