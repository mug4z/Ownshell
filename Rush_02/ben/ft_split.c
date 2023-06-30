/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:30:27 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/25 19:09:51 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int 	ft_split(char *str_num);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_fill_strs(char *str_num, char **strs_num, int length);
char	*ft_parse_chars(char *str_num, int size);
void	count_split_by_group(char *str_num,int size, int *split);
int		ft_check_zero(char *str_num);
char	*ft_add_zero(char n, int zero);
void	ft_add_space_by_three(char *num, int size, char **strs_num, int	*index);

int	main(int argc, char **argv)
{
	int		i;
	int		length;
	//char	*str_num;
	char 	**strs_num;


	(void)argc;
	i = 0;
	length = ft_split(argv[1]);
	strs_num = (char **)malloc(sizeof(char *) * (length + 1));
	ft_fill_strs(argv[1], strs_num, length);
	//printf("i: %d, length: %d\n", i, length);
	while (i < length)
	{
		ft_putstr(strs_num[i]);
		ft_putstr("\n");
		i++;
	}
	printf("&str_num size : %d\n", length);
	return (0);

}

void	ft_fill_strs(char *str_num, char **strs_num, int length)
{
	int		i;
	int		strs_index;
	int		first_char_length;
	int		length_str;

	(void)strs_num;	
	(void)length;
	
	length_str = ft_strlen(str_num);
	first_char_length = length_str % 3;
	strs_index = 0;
	i = 0;
	if (ft_check_zero(str_num) && (first_char_length == 1) )
	{
		strs_num[strs_index] = ft_parse_chars(str_num, 1);
		strs_index++;
		strs_num[strs_index] = ft_add_zero('1', length_str - 1);
		return ;
	}	
	if (first_char_length == 1)
	{
		strs_num[strs_index] = ft_parse_chars(str_num, 1);
		strs_index++;
	}
	if (first_char_length == 2)
		ft_add_space_by_three(str_num, 2, strs_num, &strs_index);
	i = first_char_length;
	if (first_char_length)
		strs_num[strs_index++] = ft_add_zero('1', length_str - i);
	while (i < length_str)
	{
		if (str_num[i] == '0' && str_num[i + 1] == '0' && str_num[i + 2] == '0')
			i += 3;
		else
		{
			ft_add_space_by_three(str_num + i, 3, strs_num, &strs_index);
			i += 3;
			strs_num[strs_index] = ft_add_zero('1', length_str - i);
			strs_index++;
		}
	}
}

void	ft_add_space_by_three(char *num, int size, char **strs_num, int	*index)
{
	if (*num == '0')
	{
		size = 2;
		num++;
	}
	if (size == 3)
	{
		printf("strlen : %d, str : %s\n", size, num);
		if (*num > '1')
		{
			strs_num[*index] = ft_parse_chars(num, 1);
			*index += 1;
		}
		strs_num[*index] = ft_add_zero('1', 2);
		*index += 1;
		num++;
	}
	if (*num == '0' && *(num + 1) == '0')
		return ;
	if (*num == '0' || *num == '1'  || *(num + 1) == '0')
	{
		strs_num[*index] = ft_parse_chars(num, 2);
		*index += 1;
	}			
	else
	{
	strs_num[*index] = ft_add_zero(*num, 1);
	*index += 1;
	strs_num[*index] = ft_parse_chars(num + 1, 1);				
	*index += 1;
	}
}

char	*ft_parse_chars(char *str_num, int size)
{	
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	//printf("strnum[%i] : %c, strnum[%i] : %c\n", i, str_num[i], i + 1, str_num[i + 1]);
	while(i < size)
	{
		str[i] = str_num[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_check_zero(char *str_num)
{
	int	i;
	int	zero;

	i = 0;
	zero = 0;
	while (str_num[i])
	{
		if (str_num[i] == '0')
			zero++;
		i++;
	}
	if (i - zero == 1)
		return (1);
	return (0);
}

char	*ft_add_zero(char n, int zero)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (zero + 2));
	str[0] = n;
	i = 1;
	while (zero)
	{
		str[i] = '0';
		zero--;
		i++;
	}
	str[i] = '\0';
	return (str);
}
