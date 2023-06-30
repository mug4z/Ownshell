/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolvetools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:21:45 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 21:44:30 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checknumber(int **map, int num, int size, int icil[2])
{
	int	iic;
	int	iil;

	iic = 0;
	iil = 0;
	while (iil < size)
	{
		if (map[iil][icil[0]] == num)
			return (1);
		iil++;
	}
	while (iic < size)
	{
		if (map[icil[1]][iic] == num)
			return (1);
		iic++;
	}
	return (0);
}

int	ft_findzero(int **map, int size, int icil[2], int *ntest)
{
	int	switche;

	*ntest = 0;
	icil[0] = 0;
	icil[1] = 0;
	switche = 0;
	while ((icil[1] < size) && !switche)
	{
		icil[0] = 0;
		while ((icil[0] < size) && !switche)
		{
			if (map[icil[1]][icil[0]] == 0)
				switche = 1;
			if (!switche)
				icil[0]++;
		}
		if (!switche)
			icil[1]++;
	}
	return (0);
}
