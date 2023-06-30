/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_pointer_slot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:40:33 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/25 23:08:23 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "./includes/ft_strlen.h"
#include "./includes/count_pointer_slot.h"

/*
int		ft_strlen(char *str);
void	count_slot_by_group(char *str_num, int size, int *slot);
void	ft_count_slot_total(char *str_num, int size, int *slot);
*/
/*
 *function used to count number of slot needed 
 * to create our tab of strings.
 *
 */

int	ft_count_pointer_slot(char *str_num)
{
	int	slot;
	int	length;

	length = ft_strlen(str_num);
	slot = 0;
	if ((*str_num == '0' || *str_num == '1') && length == 1)
		return (1);
	if (ft_strlen(str_num) <= 2)
		count_slot_by_group(str_num, ft_strlen(str_num), &slot);
	else if (ft_strlen(str_num) == 3)
		count_slot_by_group(str_num, 3, &slot);
	else
		ft_count_slot_total(str_num, ft_strlen(str_num), &slot);
	return (slot);
}

void	count_slot_by_group(char *str_num, int size, int *slot)
{
	if (size == 1)
	{
		*slot += 1;
		return ;
	}
	if (*str_num == '0')
		str_num++;
	else if (size == 3)
	{
		if (*str_num >= '2')
			*slot += 2;
		if (*str_num == '1')
			*slot += 1;
		str_num++;
	}
	if ((*str_num == '0' && *(str_num + 1) == '0')
		|| (*str_num == '0' && *(str_num + 1) == '1'))
		return ;
	if (*(str_num + 1) == '0' || *str_num == '0' || *str_num == '1')
		*slot += 1;
	else
		*slot += 2;
}

void	ft_count_slot_total(char *str_num, int size, int *slot)
{
	int	frst_char_length;
	int	i;

	frst_char_length = 3;
	if (size % 3)
		frst_char_length = size % 3;
	count_slot_by_group(str_num, frst_char_length, slot);
	*slot += 1;
	i = frst_char_length;
	while (i < size)
	{
		if (str_num[i] == '0' && str_num[i + 1] == '0' && str_num[i + 2] == '0')
			i += 3;
		else
		{
			count_slot_by_group(str_num + i, 3, slot);
			i += 3;
			if (i < size)
				*slot += 1;
		}
	}
}
