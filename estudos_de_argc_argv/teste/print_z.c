/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-18 18:32:00 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-18 18:32:00 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int print_letter(char *str)
{
    int 	i;
    i = 0;
    
    while((str[i] >= 'a' && str[i] <= 'z')
    || (str[i] >= 'A'&& str[i] <= 'Z'))
    {
        if(str[i] == 'j')
            return (1);
		i++;
    }
    
	return (0);
}
#include <unistd.h>

int main()
{
	char nome []= "lolloj";
  int vl=1;
    while(vl)
    {
        if(print_letter(nome) == 1)
        {
            write(1,"j",1);
            break;
        }
         if(print_letter(nome) != 1)
         {
            write(1,"l",1);
            break;
         }

        vl--;
    }
       

}