/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rulesparser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:06:13 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 22:12:42 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	ft_parserwritetorules(int *rules[2], char **argv, int n)
{
	int	i;
	int	ip;
	int	ii;

	i = 0;
	ip = 0;
	ii = 0;
	while (i < 4)
		rules[i++] = (int *)malloc(n * sizeof(int));
	i = 0;
	while (argv[1][i])
	{
		if ('0' <= argv[1][i] && argv[1][i] <= '9' )
		{
			rules[ip][ii] = argv[1][i] - '0';
			if (ii == n -1)
			{
				ii = 0;
				ip++;
			}
			else
				ii++;
		}
		i++;
	}
}

int	ft_rulesparser(char **argv, int *rules[4], int *size)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (!argv[1][0])
		return (1);
	while (argv[1][i])
	{
		if ('0' <= argv[1][i] && argv[1][i] <= '9' &&
				((argv[1][i + 1] == ' ') || !argv[1][i + 1]))
			n++;
		else if (argv[1][i] == ' ' && ('0' <= argv[1][i + 1] &&
					argv[1][i + 1] <= '9' ))
			i = ((2 * i) - i);
		else
			return (1);
		i++;
	}
	if (n % 4)
		return (1);
	n = n / 4;
	*size = n;
	ft_parserwritetorules(rules, argv, n);
	return (0);
}
