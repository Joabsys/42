/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-03 13:06:27 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-03 13:06:27 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <unistd.h>
// int main()
// {
// 	char *nome = " ";
// 	if(ft_str_is_uppercase(nome))
// 	{
// 		write(1,"1",1);
// 	}
// 	else
// 	write(1,"0",1);
// }