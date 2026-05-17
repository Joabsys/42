/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:03:03 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 17:03:03 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *je_strstr(char *str, char *to_find)
{
	int		j;
	int 	i;

	i=0;
	while(str[i]!='\0')
	{
		j = 0;
		while(str[i+j] == to_find[j]&& to_find[j])
		{
			j++;
		}
		if(to_find[j]=='\0')
			return(to_find);
		i++;
	}
	return(0);		
}
#include <unistd.h>
int main()
{
	char nome[]="11111111111joab11111111111111";
	char achar[]="joab";
	int i;
	i = 0;
	je_strstr(nome,achar);
	while (achar[i]!='\0')
	{
		write(1,&achar[i],1);
		i++;
	}
	
}