/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillwordswithdict.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:05:52 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/25 16:54:17 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "./includes/ft_strstr.h"
#include "./includes/constantes.h"
/*
 * the function recieve a valid strs that contains the number parsed 
 * 		it uses the length (the numbers of char*) + 1 (for the '\0')
 * 		to generate a second table with the word looked in the valid dict
 * 		if it exist
 */

#define LOOK_FIRST_SYM (0)
#define IN_SYM (1)
#define 

int ft_loaddict(char *str, char *str_translated,char *dictpath)
{
	int fd_to_read;
	int i;
	int bytes;
	char c;
	int mode;
	int steps;

	steps = LOOK_FIRST_SYM;
	mode = BEFORE_PP;
	c = 0;
	bytes = 0;
	i = 0;
	fd_to_read = open(dictpath, O_RDONLY);
	if(fd_to_read)
	{	
		while(read(ft_to_read, &c, sizeof(c)) != EOF)
		{	
			if (mode == BEFORE_PP)
			{
				if(c == *(*(str+i)) && step == LOOK_FIRST_SYM)
					step = IN_SYM;
				else if (step == IN_SYM)
				{
					if (*(*(str+i) != '\0')
					{
					}
					else
					{
						mode = GO_TO_VALUE;
					}				
				}
				else if (c == ':')
				{
					mode == AFTER_PP;
				}
				//str_translated = ft_loadline((str+i),ft_to_read,i);
			}
			else if (mode == AFTER_PP)
			{
				if(step == WAIT_NEWLINE)
				{
					if(c == '\n')
					{
						mode = BEFORE_PP;
						step = LOOK_FIRST_SYMBOL;
					}
				}
			}
			else if (mode == GO_TO_VALUE)
			{
				if(ft_char_is_alpha(c))
					mode = LOAD_VALUE;
			}
			else if (mode == LOAD_VALUE)
			{
				if(c != '\n' && c != ' ')
					write();// problem on doit connaitre la taille du texte pour malloc ?
				else
				{
					mode == DONE;
					break;
				}
			}
		}
		if (mode == DONE)
			return(OK);
	} 		
	else
		return(NOK);
}

char	**ft_fillwordswithdict(char **strs, int length, char *dictpath)
{
	char **strs_translated;
	int i;

	i = 0;
	strs_translated = (char**)malloc(sizeof(char *)*(length+1));
	if(strs_translated && dictpath)
	{
		char *endofline;

		endofline = (char*)malloc(sizeof(char));
		if(endofline)
		{	
			endofline[0] = '\0';
			*(strs_translated+length) = endofline;
			while(*(*strs_translated+i))
			{
				if(!ft_loaddict(strs[i], strs_translated[i], dictpath))
						//return(NULL);
				i++;	
			}
		}
	}	
	return(strs_translated);
}



int main(void)
{
	//generate strs + dictpath
	//
	//char **strs
	
}
