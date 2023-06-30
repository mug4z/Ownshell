/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:15:48 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 17:21:57 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

void	ft_zeroinit(int **map, int size);
int		ft_rulesparser(char **argv, int *rules[4], int *size);
void	ft_print_map(int **map, int size);
int		ft_checkmap(int **map, int *rules[4], int size);
int		ft_resolve(int **map, int *rules[4], int size);

int	main(int argc, char **argv)
{
	int	size;
	int	*rules[4];
	int	**map;
	int	i;

	if (argc == 1)
		write(1, "ERROR", 5);
	i = 0;
	ft_rulesparser(argv, rules, &size);
	map = (int **)malloc(size * sizeof (int *));
	while (i < size)
	{
		map[i] = (int *)malloc(size * sizeof (int));
		i++;
	}
	ft_zeroinit(map, size);
	if (ft_resolve(map, rules, size))
		write(1, "ERROR", 5);
}
