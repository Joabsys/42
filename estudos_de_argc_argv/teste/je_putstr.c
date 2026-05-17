/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 17:37:36 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 17:37:36 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *je_putstr(char *str)
{
	int		j;
	j = 0;
	while (str[j]!='\0')
	{
		write(1,&str[j],1);
		j++;
	}
	return(str);
	
}
int main()
{
	char *nome="joab";
	int j;
	j = 0;
	je_putstr(nome);
	
}