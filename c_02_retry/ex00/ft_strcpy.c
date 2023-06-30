/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:44:28 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/15 17:59:46 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

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
/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("strcpy: %s\n", strcpy(argv[1], argv[2]));
    printf("ft_strcpy: %s\n", ft_strcpy(argv[1], argv[2]));
    return (0);
}
*/
