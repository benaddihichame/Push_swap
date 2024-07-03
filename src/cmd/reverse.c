/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:22:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/03 15:19:11 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void reverse(t_stack **stack)
{
    if (!stack || !*stack || (*stack)->next == NULL)
        return (NULL);
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
void    rra(t_stack *a, bool print)
{
    reverse(a);
    if (print)
        ft_printf("rra\n");
}
void    rrb(t_stack *b, bool print)
{
    reverse(b);
    if (print)
        ft_printf("rrb\n");
}
void    rrr(t_stack *a, t_stack *b, bool print)
{
    reverse(a);
    reverse(b);
    if (print)
        ft_printf("rrr\n");
}