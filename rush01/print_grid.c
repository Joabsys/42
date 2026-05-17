/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-07 11:31:23 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-07 11:31:23 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_number(int n)
{
    char c;

    c = n + '0';
    write(1, &c, 1);
}

void print_grid(int **grid)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            print_number(grid[i][j]);
            if (j < 3)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}