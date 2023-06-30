/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillwordswithdict.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:05:52 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/25 22:53:33 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "./includes/constantes.h"
#include "./includes/ft_mode.h"

int	ft_char_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (OK);
	return (NOK);
}

char	*ft_init(int *i, char *c, int *mode, int *prevcharvalid)
{
	*i = 0;
	*c = 0;
	*mode = BEFORE_PP;
	*prevcharvalid = 0;
	return (malloc(MAX_DICT_SIZE + 1));
}

int	ft_loaddict(char *str, char **str_translated,
				char *dictpath, int fd_to_read)
{
	int		i;
	char	c;
	int		mode;
	char	*buffer;
	int		prevcharvalid;

	buffer = ft_init(&i, &c, &mode, &init);
	if ((fd_to_read > 0) && buffer)
	{	
		while (read(fd_to_read, &c, sizeof(c)) != EOF)
			buffer = ft_master_mode(&mode, c, &i, &prevcharvalid);
		if (mode == DONE)
		{
			*str_translated = &buffer[0];
			return (OK);
		}
		else if (mode == FAIL)
			return (NOK);
		else
			return (NOK);
	}
	return (NOK);
}

char	**ft_fillwordswithdict(char **strs, int length, char *dictpath)
{
	char	**strs_translated;
	int		i;

	i = 0;
	strs_translated = (char **)malloc(sizeof(char *) * (length + 1));
	if (strs_translated && dictpath)
	{
		strs_translated[length] = (char *)malloc(sizeof(char));
		**(strs_translated + length) = '\0';
		while (length--)
		{
			if (!ft_loaddict(strs[i], &strs_translated[i], dictpath))
				return (NULL);
			i++;
		}
	}	
	return (strs_translated);
}
/*
int	main(void)
{
	char	**pp = NULL;
	char	**pp_t;
	
	char *p = (char *) malloc(2 * sizeof(char));
	p[0] = '1';
	p[1] = '\0';
	//p[2] = 'e';
	//p[3] = '\0';
	char *p2 = (char*) malloc(2 * sizeof(char));
	p2[0] = '2';
	p2[1] = '\0';
	//p2[2] = 'o';
	//p2[3] = '\0';

	if (p && p2)
	{
		pp = malloc(3);
		pp[0] = p;
		pp[1] = p2;
		pp[2] = NULL;
	}
	pp_t = ft_fillwordswithdict(pp, 1, "numbers.dict");
	printf("%s\n", pp[0]);
	printf("%s\n", pp[1]);
	printf("traduit \n");
	if (pp_t)
	{
		printf("%s\n",pp_t[0]);
		printf("%s\n",pp_t[1]);
	}
	return (0);
}*/
