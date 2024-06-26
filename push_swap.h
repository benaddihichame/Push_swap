/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/15 17:46:12 by hbenaddi         ###   ########.fr       */
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

#define PA  "pa\n"
#define SA  "sa\n"
#define SB  "sb\n"
#define SS  "ss\n"
#define PB  "pb\n"
#define RA  "ra\n"
#define RB  "rb\n"
#define RR  "rr\n"
#define RRA "rra\n"
#define RRB "rrb\n"
#define RRR "rrr\n"

typedef struct s_stack
{
    int num;
    int index;
    struct s_stack  *target;
    struct s_stack  *next;
    struct s_stack  *prev;
}             t_stack;

int    check_int(char *str);
int   check_arg(int ac);

#endif