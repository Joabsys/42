/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_atoi2.0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 20:03:30 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 20:03:30 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int je_atoi2(char *str)
{
	int signal = 1;
	int j=0;
	int value = 0;

	while(str[j] == ' ' || str[j] >= 0 && str[j] <= 31)
	{
		j++;
	}
	if(str[j] == '-')
	{
		signal*= -1;
		j++;
	}
	while(str[j] >= '0' && str[j] <= '9')
		{
			value = (value * 10)+ (str[j] - '0');
			j++;
		}
	return(signal * value);
}
#include <stdio.h>
int main()
{
	char value [] = "-123";
	printf("%d",je_atoi2(value));
}