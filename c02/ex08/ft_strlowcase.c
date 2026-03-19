/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-03 19:13:56 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-03 19:13:56 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}


// #include <unistd.h>
// int main()
// {
// 	int 	i;
// 	i = 0;
// 	char nome[]="JOAB";
// 	ft_strlowcase(nome);
// 	while(nome[i] != '\0')
// 	{
// 		write(1,&nome[i],1);
// 		i++;
// 	}
// }
