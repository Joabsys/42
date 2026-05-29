/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:43:21 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:43:21 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	if (s != NULL)
	{
		i = 0;
		while(s[i])
		{
			write(fd,&s[i],1);
			i++;
		}
		write(fd,"\n",1);
	}
}
int main(void)
{
	char name[] = "joab";
	ft_putendl_fd(name,1);
}