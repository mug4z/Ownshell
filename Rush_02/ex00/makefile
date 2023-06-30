# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mguyot <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 10:22:44 by mguyot            #+#    #+#              #
#    Updated: 2023/06/25 15:45:09 by tfrily           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME=rush-02
CFLAGS=-Wall -Wextra -Werror
CC=gcc

all : rush-02
.PHONY : all clean fclean

rush-02 : main.o ft_putstr.o ft_putchar.o rush02.o ft_atoi.o ft_files.o
	$(CC) $(CFLAGS) main.o ft_putstr.o ft_putchar.o rush02.o ft_atoi.o ft_files.o -o $(PROGRAM_NAME)
main.o : main.c    
	$(CC) $(CFLAGS) main.c -c 
rush02.o : rush02.c
	$(CC) $(CFLAGS) rush02.c -c
ft_putstr.o : ft_putstr.c 
	$(CC) $(CFLAGS) ft_putstr.c -c
ft_putchar.o : ft_putchar.c 
	$(CC) $(CFLAGS) ft_putchar.c -c   
ft_atoi.o : ft_atoi.c
	$(CC) $(CFLAGS) ft_atoi.c -c
ft_files : ft_files.c
	$(CC) $(CFLAGS) ft_files.c -c


clean :
	rm -f *.o 
fclean : clean
	rm -f $(PROGRAM_NAME)
