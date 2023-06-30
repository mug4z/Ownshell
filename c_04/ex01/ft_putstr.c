/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:05:05 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/21 18:43:34 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		write(1, &str[index], 1);
		index++;
	}
}

/*
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	return (0);
}
*/
/*
int main(void)
{
	char	str1[]= "Salut toi";
	ft_putstr(str1);
}
*/
