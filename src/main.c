/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/06 21:06:41 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    
    a = NULL;
    b = NULL;
    if (big_check(ac, av) == 0)
             return (1);
    init_stack(&a, av);
    if (stack_sorted(&a) == false)
    {
        if (mod_len(a) == 2)
            sa(&a);
        else if (mod_len(a) == 3)
            three_node(&a);
        else
            algo(&a, &b);
    }
    return (0);
}
