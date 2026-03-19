/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-02 17:52:41 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-02 17:52:41 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <unistd.h>
// int main(void)
// {
// 	char *name = "qwe";
// 	if(ft_str_is_alpha(name))
// 	{
// 		write(1,"1",1);
// 	}
// 	else
// 	write(1,"0",1);
// }