/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rulesparser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:06:13 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 14:48:01 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_rulesparser(char **argv, int *rules[4], int *size)
{
	// this functinon take argv as input and parse it to create the set of rules such as ((CU),(CD),(RL),(RR))
	// this gonna return a 0 if evything went well and a 1 if there was an error
	int	n;
	int i;
	int ii;
	int ip;

	ii = 0;
	ip = 0;
	n = 0;
	i = 0;
	if (!argv[1][0])
		return (1);
	while (argv[1][i])
	{
		if ('0' <= argv[1][i] && argv[1][i] <= '9' )
		{
			n++;
		}
		else if (argv[1][i] == ' ')
		{
			;
		}
		else
			return (1);
		i++;
	}
	// just counted total digit, now n / 4 to have number of params by thing
	if (n % 4)
		return 1;
	n = n / 4;
	*size = n;
	i = 0;
	//init rules with malloc
	while(i < 4)
	{
		rules[i] = (int*)malloc(*size * sizeof(int));
		i++;
	}
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
			{
				ii++;
			}
		}
		i++;
	}
	return 0;
}
