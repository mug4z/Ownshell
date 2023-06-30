/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:11:31 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/11 17:51:06 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_header(int x)
{
	int		index_x;

	index_x = -1;
	ft_putchar('o');
	while (++index_x < x - 2)
	{
		ft_putchar('-');
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	ft_footer(int x)
{
	int		index_x;

	index_x = -1;
	ft_putchar('o');
	while (++index_x < x - 2)
	{
		ft_putchar('-');
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	ft_body(int x, int y)
{
	int	index_x;
	int	index_y;

	index_x = 0;
	index_y = -1;
	while (++index_y < y - 2)
	{
		ft_putchar('|');
		while (++index_x < x - 1)
		{
			ft_putchar(' ');
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		index_x = 0;
	}
}

void	rush(int x, int y)
{
	if (x != 0 && y != 0)
	{
		if (x <= 2 && y == 1)
		{
			ft_header(x);
			ft_putchar ('\n');
		}
		else if (x <= 2 && y == 2)
		{
			ft_header(x);
			ft_putchar('\n');
			ft_footer(x);
			ft_putchar('\n');
		}
		else
		{
			ft_header(x);
			ft_putchar('\n');
			ft_body(x, y);
			ft_footer(x);
			ft_putchar('\n');
		}
	}
}
