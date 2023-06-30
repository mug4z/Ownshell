/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:05:50 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/08 10:30:26 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		int_ascii;
	char	char_ascii;

	int_ascii = 97;
	while (int_ascii < 123)
	{
		char_ascii = int_ascii;
		write(1, &char_ascii, 1);
		int_ascii++;
	}
}
