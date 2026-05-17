/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_string_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 20:26:10 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 20:26:10 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char *je_string_rev(char *str)
{
	int j;
	j = 0;
	while(str[j]!='\0')
	{
		j++;
	}
	while(j >= 0)
	{
		write(1,&str[j],1);
		j--;
	}
	return(str);
}
int main()
{
	int j;
	j = 0;
	char nome[]="joab";
	je_string_rev(nome);

}