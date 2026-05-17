/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-13 22:37:29 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-13 22:37:29 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char *inverter( char *str)
{
	int i;
	i = 0;
	
	while(str[i])
	{
		i++;
	}
	
	while(i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
return(str);
}
#include <stdio.h>
int main()
{
	char nome[] = "joab";
inverter(nome);
}
