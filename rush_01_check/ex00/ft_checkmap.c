/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:17:16 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 19:20:49 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkup(int **map, int *rules[4], int size, int ip[2]);
int	ft_checkdown(int **map, int *rules[4], int size, int ip[2]);
int	ft_checkleft(int **map, int *rules[4], int size, int ip[2]);
int	ft_checkright(int **map, int *rules[4], int size, int ip[2]);

int	ft_checkmap(int **map, int *rules[4], int size)
{
	int	ip[2];

	ip[0] = 0;
	while (ip[0] < 4)
	{
		ip[1] = 0;
		while (ip[1] < size)
		{
			if (ip[0] == 0)
				if (ft_checkup(map, rules, size, ip))
					return (1);
			if (ip[0] == 1)
				if (ft_checkdown(map, rules, size, ip))
					return (1);
			if (ip[0] == 2)
				if (ft_checkleft(map, rules, size, ip))
					return (1);
			if (ip[0] == 3)
				if (ft_checkright(map, rules, size, ip))
					return (1);
			ip[1]++;
		}
		ip[0]++;
	}
	return (0);
}
