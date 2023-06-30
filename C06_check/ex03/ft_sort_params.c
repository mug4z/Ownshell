/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:55:52 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/23 12:41:13 by tfrily           ###   ########.fr       */
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
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	res;

	j = 1;
	while (j < argc--)
	{
		i = 0;
		while (i < argc)
		{
			res = ft_strcmp(argv[i], argv[i + 1]);
			if (res > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			res = 0;
			i++;
		}
		j++;
	}
	i = 1;
	while (argv[i])
		ft_putstr(argv[i++]);
}
