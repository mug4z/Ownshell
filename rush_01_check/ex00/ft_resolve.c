/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:09:16 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 21:59:21 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkmap(int **map, int *rules[4], int size);
void	ft_print_map(int **map, int size);
int		ft_checknumber(int **map, int num, int size, int icil[2]);
int		ft_findzero(int **map, int size, int icil[2], int *ntest);

int	ft_checkiffoundfinal(int **map, int *rules[2], int size)
{
	if ((map[size - 1][size - 1] != 0) && !ft_checkmap(map, rules, size))
	{
		ft_print_map(map, size);
		return (0);
	}
	return (1);
}

void	ft_initvalue(int icil[2], int *ntest)
{
	*ntest = 1;
	icil[0] = 0;
	icil[1] = 0;
}

int	ft_resolve(int **map, int *rules[4], int size)
{
	int	icil[2];
	int	ntest;

	ft_findzero(map, size, icil, &ntest);
	while (ntest <= size)
	{
		if (!ft_checkiffoundfinal(map, rules, size))
			return (0);
		if (!ft_checknumber(map, ntest, size, icil))
		{
			map[icil[1]][icil[0]] = ntest;
			if (!ft_checkmap(map, rules, size))
			{
				if (ft_resolve(map, rules, size))
					map[icil[1]][icil[0]] = 0;
				else
					return (0);
			}
		}
		ntest++;
	}
	if (!ft_checkiffoundfinal(map, rules, size))
		return (0);
	map[icil[1]][icil[0]] = 0;
	return (1);
}
