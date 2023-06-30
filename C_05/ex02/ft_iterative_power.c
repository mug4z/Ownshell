/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:06:36 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/26 19:16:23 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d",ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
}
*/
