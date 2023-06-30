/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:53:43 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/28 18:56:00 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*memory;

	len = ft_strlen(src);
	memory = malloc(sizeof(char) * len + 1);
	if (memory == NULL)
		return (memory);
	ft_strcpy(memory, src);
	return (memory);
}
/*
#include <string.h>
int main(void)
{
	char a[] = "Salut 42";
	char *res;
	//strdup(a);
	res= ft_strdup(a);
}
*/
