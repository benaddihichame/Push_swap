/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/10 21:40:11 by hbenaddi         ###   ########.fr       */
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

typedef struct s_stack
{
    int num;
    int index;

    struct s_stack  *target;
    struct s_stack  *next;
    struct s_stack  *prev;
}             t_stack;

void    check_int(char **av);
void    check_arg(int ac);

#endif