/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-03 14:03:53 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-03 14:03:53 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <unistd.h>
//  int main(void)
//  {
// 	char *nome = "joab\tjoab";
// 	if(ft_str_is_printable(nome))
// 	write(1,"1",1);
// 	else
// 	write(1,"0",1);
//  }