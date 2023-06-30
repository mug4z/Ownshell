/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:18:24 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/20 11:27:43 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main(int argc, char **argv)
{
	int len;
	if (argc == 2)
		len  = ft_strlen(argv[1]);
	return (0);
}
*/
/*
int	main(void)
{
	char	str1[]= "Salut toi";
	int		len;
	len = ft_strlen(str1);
}
*/
