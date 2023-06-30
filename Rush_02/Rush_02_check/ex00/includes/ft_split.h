/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:27:57 by bebrandt          #+#    #+#             */
/*   Updated: 2023/06/25 23:23:11 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H
void	ft_split(char *, char **);
char	**ft_create_strs_num(char *, int);
void	ft_sort_num(char *, int, char **, int *);
void	ft_sort_length_of_two(char *, char **, int *);
void	ft_fill_strs(int, char *, char **, int *);
#endif
