/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 18:54:07 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-28 18:54:07 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
//Primeiro argumento (1): O destino da escrita. O 1 especifica a Standard Output (stdout). O 0 seria a entrada padrão (stdin) 
//e o 2 seria a saída de erro (stderr).
//Segundo argumento (c): O dado em si, que geralmente é uma variável do tipo char (ou um ponteiro/array contendo o conteúdo a ser escrito).
//Terceiro argumento (1): A quantidade de bytes (ou tamanho) que será escrita na tela. Neste caso, imprime apenas 1
{
	write (fd, &c, 1);
}
