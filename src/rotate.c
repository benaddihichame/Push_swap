/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/15 14:34:16 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void rotate(t_stack **stack)
{
    if (!stack || !*stack || (*stack)->next == NULL)
        return;
    t_stack *tmp;
    t_stack *first;
    
    first = *stack;
    tmp = *stack;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = first;
    *stack = first->next;
    first->next = NULL;
}

void ra(t_stack **a, bool print)
{
    rotate(a);
    if (print)
        printf("ra\n");
}

void rb(t_stack **b, bool print)
{
    rotate(b);
    if (print)
        printf("rb\n");
}

void rr(t_stack **a, t_stack **b, bool print)
{
    rotate(a);
    rotate(b);
    if (print)
        printf("rr\n");
}