/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/16 15:56:08 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include <ctype.h>
# include "./lib/libft.h"
//                           STRUCT
typedef struct s_stack
{
    int num;
    int push_cost;
    int position;
    bool    cheapest;
    bool    above_med;
    struct s_stack  *target;
    struct s_stack  *next;
    struct s_stack  *prev;
}             t_stack;

//                  RANDOM STUFF
long ft_atol(const char *s);
int mod_len(t_stack *node);
void    three_node(t_stack **a);

//                              CHECKING
int check_double(int ac, char **av);
int count_args(int ac, char **av);
int check_int(char *str);
int check_arg(int ac);
bool    stack_sorted(t_stack *stack);
int big_check(int ac, char **av);

//                              PUSH
void    pa(t_stack **a, t_stack **b, bool print);
void    pb(t_stack **a, t_stack **b, bool print);
void    push(t_stack **dst, t_stack **src);

//                              ROTATE
void    ra(t_stack **a, bool print);
void    rb(t_stack **b, bool print);
void    rr(t_stack **a, t_stack **b ,bool print);

//                              REVERSE
void    rra(t_stack **a, bool print);
void    rrb(t_stack **b, bool print);
void    rrr(t_stack **a, t_stack **b, bool print);

//                              SWAP
void    sa(t_stack **a, bool print);
void    sb(t_stack **b, bool print);
void    ss(t_stack **a, t_stack **b, bool print);

//                                  SEARCH
t_stack *search_max(t_stack *stack);
t_stack *search_min(t_stack *stack);
t_stack *search_last(t_stack *stack);

#endif