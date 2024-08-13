/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 12:16:07 by hbenaddi         ###   ########.fr       */
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

extern int g_move_count;

//                  RANDOM STUFF
long ft_atol(const char *s);
int mod_len(t_stack **node);
void    three_node(t_stack **a);
void    free_all(t_stack **box);
void    init_stack(t_stack **a, char **av);
void    add_node(t_stack **box, int n);
void    algo(t_stack **a, t_stack **b);
t_stack *search_last(t_stack *box);

//                              CHECKING
int check_double(int ac, char **av);
int count_args(int ac, char **av);
int check_int(char *str);
int check_arg(int ac);
bool    stack_sorted(t_stack **box);
int big_check(int ac, char **av);

//                              PUSH
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);

//                              ROTATE
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);

//                              REVERSE
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);

//                              SWAP
void    sa(t_stack **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);

//                                  SEARCH
t_stack *search_max(t_stack **stack);
t_stack *search_min(t_stack **stack);
t_stack	*search_target_mid(t_stack *a_box, t_stack **b);
t_stack	*search_target_box(t_stack *a_box, t_stack **b);
t_stack *search_cheapest(t_stack **a, t_stack **b);
t_stack	*search_target_to_a(t_stack *box, t_stack **a);
void print_stack(t_stack **stack);
#endif