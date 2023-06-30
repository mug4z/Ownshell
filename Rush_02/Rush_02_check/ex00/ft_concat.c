/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:46:40 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/25 19:16:23 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_contat(char **argv)
{
	int		tlenght;
	int		i;
	char	*result;

	i = 0;
	tlenght = 0;
	while (argv[i])
	{
		tlenght += ft_strlen(argv[i]);
		i++;
	}
	result = (char *) malloc((tlenght + i) *(sizeof(char)));
	if (result)
	{
		i = 0;
		while (argv[i])
		{
			ft_strcat(result, argv[i]);
			if (argv[i + 1])
				ft_strcat(result, " ");
			i++;
		}
	}
	return (result);
}
