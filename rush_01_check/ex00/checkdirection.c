/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdirection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:17:32 by lnicolli          #+#    #+#             */
/*   Updated: 2023/06/18 18:51:30 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkup(int **map, int *rules[4], int size, int xxx[2])
{
	int	imap;
	int	maxmap;
	int	count;

	imap = 0;
	maxmap = 0;
	count = 0;
	while (imap < size && imap >= 0)
	{			
		if (map[imap][xxx[1]] != 0)
		{
			if (map[imap][xxx[1]] > maxmap)
			{
				count++;
				maxmap = map[imap][xxx[1]];
			}
			imap++;
		}
		else
			imap = -42;
	}
	if (count != rules[xxx[0]][xxx[1]] && imap != -42)
		return (1);
	return (0);
}

int	ft_checkdown(int **map, int *rules[4], int size, int xxx[2])
{
	int	imap;
	int	maxmap;
	int	count;

	maxmap = 0;
	count = 0;
	imap = size - 1;
	while (imap >= 0)
	{			
		if (map[imap][xxx[1]] != 0)
		{
			if (map[imap][xxx[1]] > maxmap)
			{
				count++;
				maxmap = map[imap][xxx[1]];
			}
			imap--;
		}
		else
			imap = -42;
	}
	if (count != rules[xxx[0]][xxx[1]] && imap != -42)
		return (1);
	return (0);
}

int	ft_checkleft(int **map, int *rules[4], int size, int xxx[2])
{
	int	imap;
	int	maxmap;
	int	count;

	imap = 0;
	maxmap = 0;
	count = 0;
	while (imap < size && imap >= 0)
	{
		if (map[xxx[1]][imap] != 0)
		{
			if (map[xxx[1]][imap] > maxmap)
			{
				count++;
				maxmap = map[xxx[1]][imap];
			}
			imap++;
		}
		else
			imap = -42;
	}
	if (count != rules[xxx[0]][xxx[1]] && imap != -42)
		return (1);
	return (0);
}

int	ft_checkright(int **map, int *rules[4], int size, int xxx[2])
{
	int	imap;
	int	maxmap;
	int	count;

	maxmap = 0;
	count = 0;
	imap = size - 1;
	while (imap >= 0)
	{
		if (map[xxx[1]][imap] != 0)
		{
			if (map[xxx[1]][imap] > maxmap)
			{
				count++;
				maxmap = map[xxx[1]][imap];
			}
			imap--;
		}
		else
			imap = -42;
	}
	if (count != rules[xxx[0]][xxx[1]] && imap != -42)
		return (1);
	return (0);
}
