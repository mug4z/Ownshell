/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 09:58:40 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/26 11:04:03 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d",ft_recursive_factorial(atoi(argv[1])));
}
*/
