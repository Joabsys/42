/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   je_fatorial.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-19 20:50:49 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-19 20:50:49 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int je_fatorial(int number)
{
	int j;
	 j = 1;
	 int k = number;
	while (j < number)
	{
		k *= number - 1;
		number--;
		
	}
	return(k);
}
#include <stdio.h>
int main()
{
	printf("%d",je_fatorial(5));

}

