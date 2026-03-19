/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-11 18:57:43 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-11 18:57:43 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
// int main()
// {
// 	char *nome = "teste";
// 	printf("quant. de caracteres: ");
// 	printf("%d",ft_strlen(nome));
// }