/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:07:55 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/15 15:59:05 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while ((str[index] >= '0' && str[index] <= '9'))
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
	result  = 	ft_str_is_numeric(argv[1]);
	printf("%d",result);
}
*/
