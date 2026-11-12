/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login1 <login1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:00:00 by login1            #+#    #+#             */
/*   Updated: 2026/11/12 10:05:21 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
#include "./ft_printf/ft_printf.h"

# define SIMPLE_FLAG "--simple"
# define MEDIUM_FLAG "--medium"
# define COMPLEX_FLAG "--complex"
# define ADAPTIVE_FLAG "--adaptive"
# define BENCH_FLAG "--bench"

# define SIMPLE_IDX 0
# define MEDIUM_IDX 1
# define COMPLEX_IDX 2
# define ADAPTIVE_IDX 3
# define BENCH_IDX 4

# define SA 0
# define SB 1
# define SS 2
# define PA 3
# define PB 4
# define RA 5
# define RB 6
# define RR 7
# define RRA 8
# define RRB 9
# define RRR 10

/* Utils */
void	ft_putnbr_fd(int fd, int n);
void	ft_putstr_fd(int fd, const char *s);
size_t	ft_strlen(const char *str);

/* Benchmark */
void	print_bench(int flags[BENCH_IDX + 1], float disorder,
			size_t ops[RRR + 1]);
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
void            push_swap(int argc, char **argv);
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

#endif
