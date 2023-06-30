/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:33:21 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/25 09:54:47 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "constantes.h"

int	ft_checkline(int fd_to_read)
{
	int	check;

	check = 0;
	while (c != '\n')
	{
		check = 0;
		if (check == LOOK_FOR_SPACES)
		{
			while (c == ' ' )
				read(fd_to_read,&c,sizeof(c));
			if (c >= '0' && c <= '9')
				check++;
			else
				return (NOK);
		}
		else if (check == LOOK_FOR_NUM) 
		{
			while (c >= '0' && c <= '9')
				read(fd_to_read,&c,sizeof(c));
			if(c == ' ')
				check++;
			else if (c == ':') 
				check = LOOK_FOR_SPACES_2;
		}
		else if (check == LOOK_FOR_SPACES_2) 
		{
			while (c == ' ')
				read(fd_to_read,&c,sizeof(c));
			if (c == ':')
			{
				check = LOOK_FOR_SPACES_3
				read(fd_to_read,&c,sizeof(c));
			}
			else
				return (NOK);
		}
		if (check == LOOK_FOR_SPACES_4) 
		{
			while (c == ' ')
				read(fd_to_read,&c,sizeof(c));
			if (c >= 33 && c <= 126)
				check++;
			else
				return (NOK);
		}
		if (check == LOOK_FOR_WORDS) 
		{
			while(c >= 32 && c <= 126)
				read(fd_to_read,&c,sizeof(c));
			if(!(c == '\n'))
				return (NOK);
		}
	}
	return (OK);
}

int  ft_read(char *path)
{
	char c;
	int bytes;
	int fd_to_read;
	int check;
	check = 0;
	fd_to_read = open(path,O_RDONLY);
	if(fd_to_read)
	{
		while ((bytes = read(fd_to_read,&c,sizeof(c))>0)) // While until end of file.
		{
			if(ft_checkline(fd_to_read))
				;
			else
				return (NOK);
		}
	}
	return (OK); // TODO a utiliser les constante erreur de constante.h
}
