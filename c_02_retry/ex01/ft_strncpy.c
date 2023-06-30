/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:29:36 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/16 10:03:09 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

//dest[x] = '\0'; A mettre pour ajouter une fin de string dans dest 
/*
int main(int argc, char **argv)
{

    (void)argc;
    printf("strncpy: %s\n", strncpy(argv[1], argv[2],20));
    printf("ft_strncpy: %s\n", ft_strncpy(argv[1], argv[2],20));
    return (0);
}
*/
/*
int main(void)
{
	char dest[] = "ddd";
	char src[] = "fff";
	printf("ft_strncpy %s\n",ft_strncpy(dest,src,20));
	//printf("strncpy %s\n",strncpy(dest,src,2));
}
*/
