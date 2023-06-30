/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:39:00 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/15 15:59:45 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while ((str[index] >= 'a' && str[index] <= 'z'))
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
	result  = ft_str_is_lowercase(argv[1]);
	printf("%d",result);
}
*/
