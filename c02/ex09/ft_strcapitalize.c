/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-03 19:33:45 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-03 19:33:45 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'a' && str <= 'z')
		&& !(str >= 'A' && str <= 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (ft_str_is_alpha(str[i]))
		{
			if (i == 0 || !ft_str_is_alpha(str[i - 1]))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
#include <unistd.h>
int main()
{
	int i=0;
	char frase [] ="hI, HOW ARE YOU? 42words forty-two; fifty+ANd+one"; 
	ft_strcapitalize(frase);
	while(frase[i]!= '\0')
	{
		write(1,&frase[i],1);
		i++;
	}
}