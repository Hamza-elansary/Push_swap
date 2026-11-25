/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login1 <login1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:00:00 by login1            #+#    #+#             */
/*   Updated: 2026/11/24 10:53:42 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
#include "../ft_printf/ft_printf.h"

/* Utils */
void	ft_putnbr_fd(int fd, int n);
void	ft_putstr_fd(int fd, const char *s);
size_t	ft_strlen(const char *str);


// struct Stack
typedef struct lst_node
{
        int     content;
        int     count;
        int     operation[11];
        struct lst_node         *next;
        struct lst_node         *rev;
 }       lst_node;

// Command Stack
int             ft_comp(char *dest, char *str);
int            push_swap(int argc, char **argv);
lst_node        *last_stack(lst_node *lst);
lst_node        *new_node(int content);
void            r_r_stack(lst_node **lst);
void            r_stack(lst_node **lst);
void            add_back_stack(lst_node **lst, lst_node *new);
void            add_front_stack(lst_node **lst, lst_node *new);
int             size_stack(lst_node *lst);
void            test_stack(void);
void            print_stack(lst_node *lst, lst_node *b);
void            push_stack(lst_node **stack, lst_node **add);
void            swap_stack(lst_node **lst);
int		check_input(int argc, char **str,lst_node **stack_a);
int		ft_split(int argc, char **str, lst_node **stack_a);
char		*ft_join(char *str);
int		ft_len(char *str);
int		ft_atoi(char *str,lst_node **stack_a);
int		check(char *str);
int		free_stack(lst_node **stack);
int		check_duplicate(lst_node *lst);
int		ft_strtrim(int argc, char **string, lst_node **stack_a);


#endif
