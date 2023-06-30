/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:31:22 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/20 10:10:38 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	//printf("strcmp %d\n",strcmp(argv[1],argv[2]));
	printf("ft_strcmp %d\n",ft_strcmp(argv[1],argv[2]));
}
*/
