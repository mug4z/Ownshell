/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:00:57 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/25 23:24:44 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/constantes.h"

void ft_mode1(int *mode, char c, int *i)
{
	if (*mode == LOOK_FIRST_SYM)
	{
			if(c >= '0' && c <= '9')
			{
				if(c != *(str + i))
				{
					*mode = WAIT_NEWLINE;
				}
				else
				{
					*mode = IN_SYM;
					*i = *i + 1;
				}
			}
	}				
}

int ft_mode2(int *mode, char c, int *i)
{
	if (*mode == IN_SYM)
	{
		
	}
		
}

int ft_mode3(int *mode, int c)
{
	if (*mode == BEFORE_PP)
	{
		if (c == ':')
		
	}
}

char *ft_mode4(int *mode, char c, int *j)
{
	if (*mode == LOAD_VALUE)
 	{
		if(c != '\n' && c != ' ') 
		{
			buffer[*j] = c;
		}	
		else
		{
			*mode = DONE;
			buffer[j] = '\0';
		}
	}	  
}

char *ft_master_mode(int *mode, char c ,int *i, int *prevcharvalid)
{
	if (*mode == LOOK_FIRST_SYM)
		ft_mode1(mode, c, &i);
	else if (*mode == IN_SYM)
		ft_mode2(mode, c, i, prevcharvalid);
	else if (*mode == GO_TO_VALUE)
		ft_mode3(mode,c);
	else if (*mode == LOAD_VALUE)
	{
		buffer = ft_mode4(mode,c,);
		*mode = DONE;
		return(buffer);
	}
	else if (*mode == WAIT_NEWLINE)
		ft_mode5(mode, c);
		
}
