/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:42:43 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:42:43 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
#include <stdio.h>
int main (void)
{
	int i;
	int 	p[5];
	size_t a;
	a = 5;
	i = 0;
	
	printf("antes\n");
	
	while(i < 5)
	{
		p[i] = i+1;
		printf("%d",p[i]);
		i++;
	}
	printf("\n");
	i = 0;
	
	ft_bzero(p, sizeof(int) * a);
	printf("depois\n");
	while(i < 5)
	{
		printf("%d",p[i]);
		i++;
	}

}