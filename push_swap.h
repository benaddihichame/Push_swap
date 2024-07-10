/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/10 15:35:11 by hbenaddi         ###   ########.fr       */
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
    int index;
    struct s_stack  *target;
    struct s_stack  *next;
    struct s_stack  *prev;
}             t_stack;

long ft_atol(const char *s);
t_stack *search_last(t_stack *stack);


//                              CHECKING
int check_double(int ac, char **av);
int count_args(int ac, char **av);
int    check_int(char *str);
int   check_arg(int ac);
bool    stack_sorted(t_stack *stack);

//                              PUSH
void    pa(t_stack **a, t_stack **b, bool print);
void    pb(t_stack **a, t_stack **b, bool print);
void push(t_stack **dst, t_stack **src);

//                              ROTATE
void    ra(t_stack **a, bool print);
void    rb(t_stack **b, bool print);
void    rr(t_stack **a, t_stack **b ,bool print);

//                              REVERSE
void    rra(t_stack **a, bool print);
void    rrb(t_stack **b, bool print);
void    rrr(t_stack **a, t_stack **b, bool print);

//                              SWAP
void    sa(t_stack *a, bool print);
void    sb(t_stack *b, bool print);
void    ss(t_stack *a, t_stack *b, bool print);


#endif