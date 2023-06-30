/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:24:02 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/08 10:31:22 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		int_ascii;
	char	letter;

	int_ascii = 122;
	while (int_ascii > 96)
	{
		letter = int_ascii;
		write(1, &letter, 1);
		int_ascii--;
	}
}
