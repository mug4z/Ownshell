/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:17:08 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/27 16:30:42 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
	{
		res = 0;
		return (res);
	}
	res = malloc(sizeof(int) * (max - min));
	if (res == NULL)
		return (res);
	while (min <= max - 1)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
#include <string.h>
int main(void)
{
    int min,max;
    min = 10;
    max = 20; // donc de 10 -> 19
    int *resfinal;
    
    resfinal = ft_range(min,max);
}
*/
