/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-07 11:30:09 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-07 11:30:09 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_safe(int **grid, int row, int col, int num)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (grid[row][i] == num)
            return (0);
        i++;
    }

    i = 0;
    while (i < 4)
    {
        if (grid[i][col] == num)
            return (0);
        i++;
    }
    return (1);
}

int solve_cell(int **grid, int row, int col)
{
    int num;

    if (row == 4)
        return (1);
    if (col == 4)
        return (solve_cell(grid, row + 1, 0));

    num = 1;
    while (num <= 4)
    {
        if (is_safe(grid, row, col, num))
        {
            grid[row][col] = num;
            if (solve_cell(grid, row, col + 1))
                return (1);
            grid[row][col] = 0;
        }
        num++;
    }
    return (0);
}

void solve(int **grid)
{
    solve_cell(grid, 0, 0);
}