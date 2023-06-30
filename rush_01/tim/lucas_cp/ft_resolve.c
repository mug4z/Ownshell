/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:09:16 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 17:28:22 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkmap(int **map, int *rules[4], int size);
void	ft_print_map(int **map, int size);

int	ft_checknumber(int **map,int num, int size, int ic, int il)
{
	int iic;
	int iil;

	iic = 0;
	iil = 0;
	while (iil < size)
	{
		if(map[iil][ic] == num)
			return (1);
		iil++;
	}
	while (iic < size)
	{
		if(map[il][iic] == num)
			return (1);
		iic++;
	}
	return (0);
}

int	ft_resolve(int **map, int *rules[4], int size)
{
	int ic;
	int il;
	int ntest;
	int switche;

	ntest = 1;
	switche= 0;
	ic = 0;
	il = 0;
	while ((il < size) && !switche)
	{
		ic = 0;
		while ((ic < size) && !switche)
		{
			if (map[il][ic] == 0)
				switche =1;
			if(!switche)
				ic++;
		}
		if(!switche)
			il++;
	}
	while(ntest <= size)
	{
		if ((map[size -1][size - 1]!=0)&&!ft_checkmap(map, rules, size))
		{
			ft_print_map(map, size);
			return 0;
		}
		if(!ft_checknumber(map, ntest, size, ic, il))
		{
			map[il][ic] = ntest;
			if (!ft_checkmap(map, rules, size))
			{
				if(ft_resolve(map, rules, size))
				{
					map[il][ic] = 0;
				} else {
					return (0);
				}
			}
		}
		ntest++;
	}
	if ((map[size -1][size - 1]!=0)&&!ft_checkmap(map, rules, size))
	{
		ft_print_map(map, size);
		return 0;
	}
	map[il][ic] = 0;
	return (1);
}
