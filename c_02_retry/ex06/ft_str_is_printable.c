/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:10 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/15 16:01:49 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while ((str[index] >= ' ' && str[index] <= '~'))
	{
		index++;
	}
	if (str[index] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	int result;
	result  = ft_str_is_printable(argv[1]);

	printf("%d",result);
}
*/
