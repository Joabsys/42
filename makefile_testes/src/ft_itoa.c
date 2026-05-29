/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:42:58 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:42:58 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	size;

	num = n;
	size = get_size(n);
	if (n < 0)
		num *= -1;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	size--;
	while (num > 0)
	{
		str[size] = num % 10 + '0';
		size--;
		num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1])
		str[size] = '-';
	return (str);
}
