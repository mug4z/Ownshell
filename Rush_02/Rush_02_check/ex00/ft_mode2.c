/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mode2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:09:15 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/25 23:16:22 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_mode5(int *mode, char c)
{
	if (c == '\n')
		*mode = LOOK_FIRST_SYM;
}
