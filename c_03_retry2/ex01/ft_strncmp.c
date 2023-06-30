/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:18:59 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/20 10:12:04 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int				i;

	i = 0;
	if (!(n == 0))
	{	
		while ((s1[i] != '\0' && s2[i] != '\0') && (i < n - 1)
			&& (s1[i] == s2[i]))
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int main(int argc, char **argv)
{
	(void) argc;
	//printf("strncmp %d\n",strncmp(argv[1],argv[2],3));
	printf("ft_strncmp %d\n",ft_strncmp(argv[1],argv[2],3));
}
*/
