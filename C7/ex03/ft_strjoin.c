/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:58 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/28 18:53:44 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, char *sep)
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
	while (*sep)
		dest[i++] = *sep++;
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index++;
	}
	return (index);
}

void	ft_sepornot(int size, char *temp, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i +1 == size)
			ft_strcat(temp, strs[i], "");
		else
			ft_strcat(temp, strs[i], sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		tlength;
	int		i;

	i = size;
	tlength = 0;
	temp = 0;
	if (size == 0)
	{
		temp = malloc(sizeof(char));
		return (temp);
	}
	while (i > 0)
	{
		tlength += ft_strlen(strs[i - 1]);
		i--;
	}
	temp = malloc(sizeof(char) * tlength + (ft_strlen(sep) * size - 1) + 1);
	if (temp == NULL)
		return ("Error");
	ft_sepornot(size, temp, strs, sep);
	return (temp);
}
/*
#include <stdio.h>
int main (void)
{
	char *a[] = {"Hello", "world"};
	char *sep = "" ;
	char *res;
	res = ft_strjoin(2,a,sep);
	printf("%s",res);
}
*/
