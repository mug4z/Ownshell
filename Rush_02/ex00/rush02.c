/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:49:56 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/25 11:01:11 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include<stdio.h>
#include "./includes/constantes.h"
#include "./includes/ft_atoi.h"

static char	*mode1(char *numtoparse, unsigned int *error)
{
	char	*result;

	if (ft_valid_number(numtoparse))
	{
		*error = VALID_NUMBER;
		result = ft_parse_num(numtoparse);
		return(result);
	}
	else
	{
		*error = NOT_A_VALID_NUMBER;
		return (NULL);
	}
}

static char	*mode2(char *dictpath, char *numtoparse, unsigned int *error)
{
	char	*result;

	if (ft_valid_number(numtoparse))
	{
		*error = VALID_NUMBER;
		if (1)//ft_check_dict(dictpath))
		{
			return (result);
		}
		else
		{
			*error = DICT_ERROR;
			return (NULL);
		}
	}
	else
	{
		*error = NOT_A_VALID_NUMBER;
		return (NULL);
	}
}

char	*rush02(char *str, char *str2, unsigned int *error)
{
	char	*result;

	result = NULL;
	if (!str2)
		result = mode1(str, error);
	else
		result = mode2(str, str2, error);
	if (*error != VALID_NUMBER && result)
	{
		return(result);
	}
	return (result);
}

void empty_memory(char ***result)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(**((*result)+i))
		i++;
	while(i + 1)
	{
		free(*((*result)+i));
		i--;
	}
	free(*result);
}


/*
#include <stdlib.h>
#include <string.h>
#include "./includes/ft_putstr.h"
#include <stdio.h>
int main(int argc, char **argv)
{
	//char *p =(char*)malloc(3*sizeof(char*));
	char **result = (char **)malloc(3*sizeof(char*));
	  
	for (int i = 0; i<3; i++)
	{
		result[i] =(char*)malloc(10*sizeof(char));
	}
	result[0][0] = 'C';
	result[0][1] = 'A';
	result[0][2] = 'M';
	result[0][3] = 'E';
	result[0][4] = '\0';
	result[1][0] = 'B';
	result[1][1] = 'A';
	result[1][2] = 'B';
	result[1][3] = 'A';	
	result[1][4] = '\0';
	result[2][0] = '\0';
	
	unsigned int i= 0;
	while(i!=2)
	{
		ft_putstr(result[i]);
		ft_putstr("\n");
		i++;
	}
	i = 0;
	unsigned int j= 0;
	while(i != 2)
	{
		while(j != 5)
	   	{
				printf("%p\n",&result[i][j]);
				j++;
		}
		j = 0;
		i++;
	}
	printf("%p\n",&result[2][0]);
	printf("%p\n",&result[2][9]);
	ft_putstr("empty \n");
	empty_memory(&result);
	result = NULL;
	//while(i!=2)
	//{
	//	ft_putstr(result[i]);
	//	ft_putstr("\n");
	//	i++;
	//}			//result[0] = NULL;
	return 0;
}
*/
