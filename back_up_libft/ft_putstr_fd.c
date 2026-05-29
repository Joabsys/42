/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:43:34 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:43:34 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)// recebi uma string e um valor inteiro que determinara a sai
//padrão do array de char
{	
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			write(fd,&s[i],1);
			// ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

int main(void)
{
	char name[] = "joab";
	ft_putstr_fd(name,1);

}