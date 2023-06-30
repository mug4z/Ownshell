/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:02:10 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/14 10:20:37 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index++;
	}
	write(1, str, index);
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
