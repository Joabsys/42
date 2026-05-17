/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 18:21:32 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 18:21:32 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int je_atoi(char *str)
{
	int j;
	j = 0;
	int signal = 1;
	int number;
	number = 0;
	while(str[j] == ' ' || (str[j] >= 0 && str[j] <= 31))
	{
		j++;
	}
	if(str[j] == '-')
	{
		signal *= -1;
		j++;
	}
		while(str[j] >= '0' && str[j] <='9')
		{
			number = (number * 10) + (str[j] - '0');
			j++;
		}
	return(signal * number);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char number[] = "-100";
	printf("%d",je_atoi(number));
	
}