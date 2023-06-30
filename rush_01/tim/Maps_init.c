/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maps_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubachma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:58:15 by lubachma          #+#    #+#             */
/*   Updated: 2023/06/17 19:43:55 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 //#include <stdio.h> //juste pour printf --> test 

void ft_maps_init(int map[2][2], int size)
{
	int il, ic;
	il = 0;
	ic = 0;
	while (il < size)
	{
		ic = 0;
		while (ic < size)
		{
			map[ic][il] = 0;
	//		 printf("%d", map[ic][il]); // impression de map pour les tests
			ic++;
		}
	il++;
	}
	 // ajout du return, mais a voir pour modifier
}
 /*int main ()
 {
	 int	result_map[4][4];

     int map[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

     result_map = ft_maps_init(map, 4);
     return 0;
 }*/
