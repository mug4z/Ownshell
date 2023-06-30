/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:48:48 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/24 10:11:45 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
# define NOT_A_VALID_NUMBER (1)
# define DICT_ERROR (2)

ft_putstr(char *str);


int main(int argc, char **argv)
{
	unsigned int error;
	char *result;

	result = NULL;
	if (argc == 2)
		result = rush02(argv[1],NULL, &error);	
	else if (argc == 3)
		result = rush02(argv[1], argv[2], &error);
	if(!error)
		ft_putstr(result);
	else if (error == NOT_A_VALID_NUMBER)
		ft_putstr("Error\n");
	else if (error == DICT_ERROR)
		ft_putstr("Dict Error\n");
	return (0);
}
