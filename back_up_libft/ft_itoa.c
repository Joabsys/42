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
 
static size_t	get_size(int n)// saber o tamanho de numero que esta sendo passado.
{
	size_t	size;//criado para tratar o valor negativo.

	if (n > 0)
		size = 0;
	else
		size = 1;//se o valor for negativo cria mais um espaço par ao simbolo
	while (n)//passado por cada numero do array
	{
		n /= 10;//dividimos ele por 10 para incrementar size
		size++;//loopa para cada n/=10
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
	if (n < 0)//se o numero menor que zero
		num *= -1;// faz ele ficar positivo.
	str = (char *)malloc(size + 1 * sizeof(char));//malloca size mais 1 para o \0
	if (!str)
		return (NULL);
	str[size] = '\0';// preenche na posicao size com \0
	size--;// faz uma decremento em size para que em str[size] = (num % 10) + '0'
	//ja converta o caracter da posicao para char
	while (num > 0)
	{
		str[size] = (num % 10) + '0';// acha o modulo do int e converter para char.
		size--;
		num /= 10;// divide o valor por 10 para  depois achar o valor modulo dele
	}
	if (size == 0 && str[1] == '\0')// verifica se size igual a zero e str[1] == \0
		(str[size]) = '0';
	else if (size == 0 && str[1])// verifica se size == 0 e se estamos na posição str[1]
	// uma obsevação aqui para str[1] no loop em fica com zero por casou do malloc
	//estão ao chegar nesta parte str[size] = '-'
		str[size] = '-';
	return (str);
}
#include <stdio.h>
int main(void)
{
    char    *result;
    int     tests[] = {0, 1, -1, 42, -42, 2147483647, -2147483648, 100, -999};
    int     total;
    int     i;

    total = sizeof(tests) / sizeof(tests[0]);
    i = 0;
    while (i < total)
    {
        result = ft_itoa(tests[i]);
        if (result)
        {
            printf("ft_itoa(%d) = \"%s\"\n", tests[i], result);
            free(result);
        }
        else
            printf("ft_itoa(%d) = NULL (erro de alocação)\n", tests[i]);
        i++;
    }
    return (0);
}