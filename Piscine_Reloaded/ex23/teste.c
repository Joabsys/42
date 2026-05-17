/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-15 20:30:26 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-15 20:30:26 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_point.h"

void set_point(t_point *point)
{
point-> x = 42;
point-> y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0);
}
