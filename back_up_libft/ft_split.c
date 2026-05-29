/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 19:25:39 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-26 19:25:39 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// Quando a variável trigger é \(0\), significa que a função está 
// procurando o início de uma nova palavra.Quando trigger é \(1\), 
// indica que a função está percorrendo o interior de uma palavra que já começou.
static int    count_words(const char *str, char c)
{
    int    i;
    int    trigger;

    i = 0;
    trigger = 0;
    while (*str)
    {// trigger verificar o inicio da proxima palavra.
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }//quando acha a proxima palavra trigger receber 0
        else if (*str == c)
            trigger = 0;
        str++;
    }//retorna a quantidade de palavras contatas
    return (i);
}

static char    *word_dup(const char *str, int start, int finish)
{
    char    *word;
    int        i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    size_t    i;
    size_t    j;
    int        index;
    char    **split;

    split = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!s || !split)
        return (NULL);
    i = 0;
    j = 0;
    index = -1;// flag para indicar que não encontramos uma palavra
    while (i <= ft_strlen(s))// pega atea a ultima palavra
    {

        if (s[i] != c && index < 0)//verifica se estamos dentro de uma palavra
            index = i;//flega index com i pra sabemos que estamos loopando uma palavra.
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)//s[i] == c encontramos o separador?
        //i==strlen(s) chegamos no final da string?mas só entra no else_if se index >= 0
        {
            split[j++] = word_dup(s, index, i);//chama para copiar os caracteres do ponto index ate o ponto i (exclusivamente) para salvar split e incrementa j
            index = -1;//reseta para saber que estamos fora de uma palavra
        }
        i++;
    }
    split[j] = 0;//null no final array para manipulação da main;
    return (split);
}

int main(void)
{
    char const *str = "Teste de split para a Piscina da 42";
    char c = ' ';
    char **resultado;
    int i;

    resultado = ft_split(str, c);
    if (!resultado)
    {
        printf("Erro ao alocar memória!\n");
        return (1);
    }

    i = 0;
    while (resultado[i] != NULL)
    {
        printf("Palavra %d: %s\n", i, resultado[i]);
        free(resultado[i]); // Libera a palavra individual
        i++;
    }
    
    free(resultado); // Libera o array de ponteiros
    return (0);
}