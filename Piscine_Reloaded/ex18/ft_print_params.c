/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-13 12:11:02 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-13 12:11:02 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		j;
	int		k;

	j = 1;
	k = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			k = 0;
			while (argv[j][k] != '\0')
			{
				ft_putchar(argv[j][k]);
				k++;
			}void	ft_put_char(char c);

			j++ ;
			ft_putchar('\n');
		}
	}
}
