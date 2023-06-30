/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:05:19 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/17 18:07:34 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// Print a char called by ft_nbr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Take an int in arguments and return the equivalent in char.
void	ft_putnbr(int c)
{
	if (c >= 0 && c <= 9)
		ft_putchar(c + 48);
}

// Take a 2d table and a int size in arguments and print it.
// Like the following
/*1 2 3 4
* 5 6 7 8
* 5 9 9 0*/

void	ft_print_map(int map[4][4], int size)
{
	int i,j;
	i = 0;
	j = 0;
  
  while (i < size)
  {
	j = 0;
    while (j < size)
    {
	  ft_putnbr(map[i][j]);
	  ft_putchar(' ');
	  j++;
    }
	ft_putchar('\n');
	i++;
  }
}  
