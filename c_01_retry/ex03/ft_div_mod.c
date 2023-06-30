/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrily <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:39:34 by tfrily            #+#    #+#             */
/*   Updated: 2023/06/13 17:54:30 by tfrily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a = 10;
	int b = 5;
	int div = 0;
	int mod = 0;

	ft_div_mod(a,b,&div,&mod);
	return (0);
}
*/
