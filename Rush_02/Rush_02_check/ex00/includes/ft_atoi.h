/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:35:17 by mguyot            #+#    #+#             */
/*   Updated: 2023/06/24 15:36:17 by mguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ATOI_H
# define FT_ATOI_H
int ft_valid_number(char *);
char *ft_parse_num(char *);
int ft_get_first_num(char*);
int ft_count_str_num(char*,int);
#endif
