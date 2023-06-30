/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:30:27 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/25 23:26:52 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


#include "./includes/ft_strlen.h"
#include "./includes/count_pointer_slot.h"
#include "./includes/split.h"
#include "./includes/malloc_pointer_str.h"

//#include <stdio.h>
/*
int		ft_count_pointer_slot(char *str_num);
char	**ft_create_strs_num(char *str_num, int size);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_check_zero(char *str_num);
char	*ft_add_zero(char n, int zero);
void	ft_sort_num(char *num, int size, char **strs_num, int *index);
void	ft_sort_length_of_two(char *num, char **strs_num, int *index);
void	ft_fill_strs(int i, char *str_num, char **strs_num, int *strs_index);
char	*ft_parse_chars(char *str_num, int size);
*/
/* Receive a valid char_number and create a pointer on pointer of string.
 * 
 * if 4542 is received we create ["4", "1000", "5", "100", "40", "2", "\0"]
 *
 *
 *
 */

void	ft_split(char *str_num, char **strs_num)
{
	int		i;
	int		strs_index;
	int		first_char_length;
	int		length_str;

	length_str = ft_strlen(str_num);
	first_char_length = length_str % 3;
	strs_index = 0;
	i = 0;
	if (first_char_length == 1)
	{
		strs_num[strs_index] = ft_parse_chars(str_num, 1);
		strs_index++;
	}
	if (first_char_length == 2)
		ft_sort_num(str_num, 2, strs_num, &strs_index);
	i = first_char_length;
	if (first_char_length)
		strs_num[strs_index++] = ft_add_zero('1', length_str - i);
	ft_fill_strs(i, str_num, strs_num, &strs_index);
}

void	ft_fill_strs(int i, char *str_num, char **strs_num, int *strs_index)
{
	int	length_str;

	length_str = ft_strlen(str_num);
	while (i < length_str)
	{
		if (str_num[i] == '0' && str_num[i + 1] == '0' && str_num[i + 2] == '0')
			i += 3;
		else
		{
			ft_sort_num(str_num + i, 3, strs_num, strs_index);
			i += 3;
			strs_num[*strs_index] = ft_add_zero('1', length_str - i);
			*strs_index += 1;
		}
	}
}

void	ft_sort_num(char *num, int size, char **strs_num, int *index)
{
	if (*num == '0')
	{
		size = 2;
		num++;
	}
	if (size == 3)
	{
		if (*num > '1')
		{
			strs_num[*index] = ft_parse_chars(num, 1);
			*index += 1;
		}
		strs_num[*index] = ft_add_zero('1', 2);
		*index += 1;
		num++;
	}
	ft_sort_length_of_two(num, strs_num, index);
}

void	ft_sort_length_of_two(char *num, char **strs_num, int	*index)
{
	if ((*num == '0' && *(num + 1) == '0')
		|| (*num == '0' && *(num + 1) == '1'))
		return ;
	else if (*num == '0')
	{
		strs_num[*index] = ft_parse_chars(num + 1, 1);
		*index += 1;
		return ;
	}
	else if (*num == '1' || *(num + 1) == '0')
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

/*
int	main(int argc, char **argv)
{
	int		i;
	int		length;
	char	**strs_num;

	(void)argc;
	i = 0;
	length = ft_count_pointer_slot(argv[1]);
	strs_num = ft_create_strs_num(argv[1], length);
	while (i < length)
	{
		ft_putstr(strs_num[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
*/
