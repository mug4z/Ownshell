/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:22:36 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/16 10:11:37 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	if (str[i] == '\0')
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
	result  = 	ft_str_is_alpha(argv[1]);
	printf("%d",result);
}
*/
