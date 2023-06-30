/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print_map_ini.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:22:19 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/17 19:43:03 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_map(int map[2][2], int size);
void	ft_maps_init(int map[2][2], int size);
int main(void)
{
	int map[2][2] = {{1, 2}, {5, 6}};
	ft_maps_init(map,2);
	ft_print_map(map,2);

}
