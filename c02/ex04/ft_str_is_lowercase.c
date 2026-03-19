/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-02 19:49:32 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-02 19:49:32 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
// 	char *nome =" joab";
// 	if(ft_str_is_lowercase(nome))
// 		write(1,"1",1);
// 	else
// 	write(1,"0",1);
// }
