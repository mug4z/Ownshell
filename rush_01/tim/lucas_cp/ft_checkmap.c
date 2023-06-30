/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:17:16 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 18:17:21 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkup(int **map, int *rules[4], int size, int iip, int ip);
int ft_checkdown(int **map, int *rules[4], int size, int iip, int ip);
int ft_checkleft(int **map, int *rules[4], int size, int iip, int ip);
int ft_checkright(int **map, int *rules[4], int size, int iip, int ip);

int	ft_checkmap(int **map, int *rules[4], int size)
{
	int ip;
	int iip;

	ip = 0;
	iip = 0;
	while(ip < 4)
	{
		iip = 0;
		while(iip < size)
		{
			if (ip == 0)
				if (ft_checkup(map, rules, size, iip, ip))
					return (1);
			if (ip == 1)
				if (ft_checkdown(map, rules, size, iip, ip))
					return (1);
			if (ip == 2)
				if (ft_checkleft(map, rules, size, iip, ip))
					return (1);	
			if (ip == 3)
				if (ft_checkright(map, rules, size, iip, ip))
					return (1);	
			iip++;
		}
		ip++;
	}
	return 0;
}
