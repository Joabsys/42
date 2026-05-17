/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-07 17:49:27 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-07 17:49:27 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void print_grid(int **grid);
void solve(int **grid);

// Função para transformar argv[1] em 16 números válidos (1 a 4)
int parse_input(char *str, int *clues)
{
    int i = 0;

    while (*str)
    {
        if (*str >= '1' && *str <= '4')
        {
            if (i >= 16)
                return (0); // mais de 16 números
            clues[i++] = *str - '0';
        }
        else if (*str != ' ')
            return (0); // caractere inválido
        str++;
    }
    return (i == 16); // exatos 16 números
}

int main(int argc, char **argv)
{
    int **grid;
    int clues[16];
    int i, j;

    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }

    if (!parse_input(argv[1], clues))
    {
        write(1, "Error\n", 6);
        return (0);
    }

    // Aloca a grid 4x4
    grid = malloc(sizeof(int *) * 4);
    if (!grid)
        return (1);
    i = 0;
    while (i < 4)
    {
        grid[i] = malloc(sizeof(int) * 4);
        if (!grid[i])
            return (1);
        j = 0;
        while (j < 4)
        {
            grid[i][j] = 0; // Inicializa com 0
            j++;
        }
        i++;
    }

    solve(grid);      // Resolve a grid (backtracking)
    print_grid(grid); // Imprime a grid

    // Libera a memória
    i = 0;
    while (i < 4)
    {
        free(grid[i]);
        i++;
    }
    free(grid);
    return (0);
}