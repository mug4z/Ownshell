/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_pointer_slot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:40:33 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/25 19:09:48 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	count_split_by_group(char *str_num,int size, int *split);
void	ft_count_split_total(char *str_num, int size, int *split);

int ft_split(char *str_num)
{
	int		split;
	int	length;

	length = ft_strlen(str_num);
	split = 0;
	if ((*str_num == '0' || *str_num == '1') && length == 1)
		return (1);
	if (ft_strlen(str_num) <= 2)
		count_split_by_group(str_num, ft_strlen(str_num), &split);
	else if (ft_strlen(str_num) == 3)
		count_split_by_group(str_num, 3, &split);
	else
	ft_count_split_total(str_num ,ft_strlen(str_num), &split);

	return (split);
}

void count_split_by_group(char *str_num,int size, int *split)
{
	//printf("trio : %c%c%c - size: %d - split %d\n", *str_num, *(str_num + 1), *(str_num + 2), size, *split);
	if (size == 1)
	{
		//if (*str_num > '1')
		*split += 1;
		return ;
	}
	if (*str_num == '0')
		str_num++;
	else if (size == 3)
	{
		if (*str_num >= '2')
			*split += 2;
		if (*str_num == '1')
			*split += 1;
		str_num++;
	}
	//printf("trio : %c%c%c - size: %d - split %d\n", *str_num, *(str_num + 1), *(str_num + 2), size, *split);
	if (*(str_num + 1) == '0' && *str_num == '0')
		return ;
	if (*(str_num + 1) == '0' || *str_num == '0' || *str_num == '1')
		*split += 1;
	else
		*split += 2;
}

void	ft_count_split_total(char *str_num, int size, int *split)
{
	int	trio_length;
	int	i;

	
	//printf("num1 = %s\n", str_num);
	if (size % 3)
		trio_length = size % 3;
	else	
		trio_length = 3;
	count_split_by_group(str_num, trio_length, split);
	*split += 1;
	i = trio_length;
	while (i < size)
	{
		if (str_num[i] == '0' && str_num[i + 1] == '0' && str_num[i + 2] == '0')
			i += 3;
		else
		{
			count_split_by_group(str_num +  i, 3, split);
			i += 3;
			if (i < size)
				*split += 1;
		}
	}
}
