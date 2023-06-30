/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdirection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:17:32 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 18:17:36 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkup(int **map, int *rules[4], int size, int iip, int ip)
{
	int imap;
	int maxmap;
	int count;

	imap = 0;
	maxmap = 0;
	count = 0;
	while (imap < size)
	{
		if (map[imap][iip] > maxmap)
		{
			count++;
			maxmap = map[imap][iip];
		}
		if (count > rules[ip][iip])
		{
			return (1);
		}
		imap++;
	}
	return (0);
}
int ft_checkdown(int **map, int *rules[4], int size, int iip, int ip)
{
	int imap;
	int maxmap;
	int count;

	maxmap = 0;
	count = 0;
	imap = size - 1;
	while (imap >= 0)
	{			
		if (map[imap][iip] != 0)
		{
			if (map[imap][iip] > maxmap)
			{
				count++;
				maxmap = map[imap][iip];
			}
			if (count > rules[ip][iip])
				return 1;
			imap--;
		} else {imap = -42;}
	}
	if (count != rules[ip][iip] && imap != -42)
		return (1);
	return (0);
}
int ft_checkleft(int **map, int *rules[4], int size, int iip, int ip)
{
	int imap;
	int maxmap;
	int count;

	imap = 0;
	maxmap = 0;
	count = 0;
	while (imap < size)
	{
		if (map[iip][imap] > maxmap)
		{
			count++;
			maxmap = map[iip][imap];
		}
		if (count > rules[ip][iip])
		{
			return 1;
		}
		imap++;
	}
	return (0);
}
int ft_checkright(int **map, int *rules[4], int size, int iip, int ip)
{
	int imap;
	int maxmap;
	int count;

	imap = 0;
	maxmap = 0;
	count = 0;
	imap = size - 1;
	while (imap >= 0)
	{
		if (map[iip][imap] != 0)
		{
			if (map[iip][imap] > maxmap)
			{
				count++;
				maxmap = map[iip][imap];
			}
			if (count > rules[ip][iip])
			{
				return 1;
			}
			imap--;
		} else {imap = -42;}
	}
	if (count != rules[ip][iip] && imap != -42)
		return (1);
	return (0);
}
