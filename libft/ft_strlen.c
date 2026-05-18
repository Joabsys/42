/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-01 22:11:00 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-01 22:11:00 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// int main()
// {
// 	char *nome = "joab";
// 	int 	contador;
// 	contador = ft_strlen(nome);
// 	char converter = contador +'0';
// 	write(1,&converter,1);
// }