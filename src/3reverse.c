/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3reverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:22:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 12:14:37 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void reverse(t_stack **stack)
{
    if (!stack || !*stack || (*stack)->next == NULL)
        return ;
    t_stack *prev;
    t_stack *last;

    prev = NULL;
    last = *stack;
    while (last->next != NULL)
    {
        prev = last;
        last  = last->next;
    }
    if (prev)
    {
        prev->next = NULL;
        last->next = *stack;
        *stack = last;
    }
}
void    rra(t_stack **a)
{
   reverse(a);
   ft_printf("rra\n");
   g_move_count++;
}
void    rrb(t_stack **b)
{
    reverse(b);
    ft_printf("rrb\n");
    g_move_count++;
}
void    rrr(t_stack **a, t_stack **b)
{
    reverse(a);
    reverse(b);
    ft_printf("rrr\n");
    g_move_count++;
}