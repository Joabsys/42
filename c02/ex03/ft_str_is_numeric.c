/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-02 18:13:11 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-02 18:13:11 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	char *name = " joab";
// 	if(ft_str_is_numeric(name))
// 	{
// 		write(1,"1",1);

// 	}
// 	else
// 	write(1,"0",1);
// }