/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:21:39 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/25 19:05:23 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "includes/constantes.h"

int	ft_checkspace(int fd_to_read, char *c, int *check)
{
	if (*check == LOOK_FOR_SPACES)
	{
		while (*c == ' ' )
			read(fd_to_read, c, sizeof(char));
		if (*c == '\n')
			return (OK);
		if (*c >= '0' && *c <= '9')
			*check = LOOK_FOR_NUM;
		else
			return (NOK);
	}
	if (*check == LOOK_FOR_SPACES_2)
	{
		while (*c == ' ')
			read(fd_to_read, c, sizeof(char));
		if (*c == ':')
		{
			*check = LOOK_FOR_SPACES_3;
			read(fd_to_read, c, sizeof(char));
		}
		else
			return (NOK);
	}
	return (OK);
}

int	ft_keyside(int fd_to_read, char *c, int *check)
{
	if (*check == LOOK_FOR_NUM)
	{
		while (*c >= '0' && *c <= '9')
			read(fd_to_read, c, sizeof(char));
		if (*c == ' ')
			*check = LOOK_FOR_SPACES_2;
		else if (*c == ':')
		{
			*check = LOOK_FOR_SPACES_3;
			read(fd_to_read, c, sizeof(char));
		}
		else
			return (NOK);
	}
	return (OK);
}

int	ft_valueside(int fd_to_read, char *c, int *check)
{
	if (*check == LOOK_FOR_SPACES_3)
	{
		while (*c == ' ')
			read(fd_to_read, c, sizeof(char));
		if (*c >= 33 && *c <= 126)
			*check = LOOK_FOR_WORDS;
		else
			return (NOK);
	}
	if (*check == LOOK_FOR_WORDS)
	{
		while (*c >= 32 && *c <= 126)
			read(fd_to_read, c, sizeof(char));
		if (!(*c == '\n'))
			return (NOK);
	}
	return (OK);
}

int	ft_checkline(int fd_to_read, char c)
{
	int	check;

	check = 0;
	if (ft_checkspace(fd_to_read, &c, &check))
	{
		if (ft_keyside(fd_to_read, &c, &check))
			;
		else
			return (NOK);
	}
	else
		return (NOK);
	if (ft_checkspace(fd_to_read, &c, &check))
	{
		if (ft_valueside(fd_to_read, &c, &check))
			;
		else
			return (NOK);
	}
	else
		return (NOK);
	return (OK);
}

int	ft_read(char *path)
{
	char	c;
	int		bytes;
	int		fd_to_read;

	fd_to_read = open(path, O_RDONLY);
	bytes = read(fd_to_read, &c, sizeof(c)) > 0;
	if (fd_to_read)
	{
		while ((bytes > 0))
		{
			if (!(ft_checkline(fd_to_read, c)))
				return (NOK);
			bytes = read(fd_to_read, &c, sizeof(c));
		}
		return (OK);
	}
	return (NOK);
}
