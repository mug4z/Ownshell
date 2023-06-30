/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:34:39 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/28 19:01:33 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (i);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
/*
#include <string.h>
int main(void)
{
    int min,max;
    min = 10;
    max = 20; // donc de 10 -> 19
    int *resfinal;

    ft_ultimate_range(&resfinal, min, max);
}
*/
