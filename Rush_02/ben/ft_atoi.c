/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:12:14 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/24 14:04:39 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
# define NOT_A_VALID_NUMBER (0)
# define NUMBER_VALID (1)

int		ft_valid_number(char *nb);
char	*ft_parse_num(char *nb);
int		ft_get_first_num(char *nb);
int		ft_count_str_num(char *nb, int i);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("atoi : %d\n", atoi(argv[1]));
	printf("valid number : %d\n", ft_valid_number(argv[1]));
	if (ft_valid_number(argv[1]))
		printf("str_num: %s\n", ft_parse_num(argv[1]));
}

int	ft_valid_number(char *nb)
{
	int	i;
	int	count_num;

	i = ft_get_first_num(nb);
	count_num = ft_count_str_num(nb, i);
	if (count_num)
		return (NUMBER_VALID);
	return (NOT_A_VALID_NUMBER);
}

char	*ft_parse_num(char *nb)
{
	int		i;
	int		str_num_length;
	int		i_str_num_end;
	int		i_str_num;
	char	*str_num;

	i = ft_get_first_num(nb);
	str_num_length = ft_count_str_num(nb, i);
	str_num = (char *)malloc(sizeof(char) * str_num_length + 1);
	i_str_num_end = i + str_num_length;
	i_str_num = 0;
	while (i < i_str_num_end)
		str_num[i_str_num++] = nb[i++];
	str_num[i_str_num] = '\0';
	return (str_num);
}

int	ft_count_str_num(char *nb, int i)
{
	int	str_num_length;

	str_num_length = 0;
	while (nb[i] && nb[i] >= '0' && nb[i] <= '9')
	{
		str_num_length++;
		i++;
	}
	return (str_num_length);
}

int	ft_get_first_num(char *nb)
{
	int	i;
	int	zero;
	int	length;

	i = 0;
	zero = 0;
	length = ft_strlen(nb);
	while (nb[i] && nb[i] <= ' ')
		i++;
	if (nb[i] == '+' || nb[i] == '-')
		i++;
	while (nb[i] == '0' && i != length - 1)
		i++;
	if (!(nb[i] >= '0' && nb[i] <= '9') && nb[i - 1] == '0')
		i--;
	return (i);
}
