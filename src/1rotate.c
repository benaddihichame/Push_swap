/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/06 21:04:17 by hbenaddi         ###   ########.fr       */
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

void ra(t_stack **a)
{
    rotate(a);
    printf("ra\n");
}

void rb(t_stack **b)
{
    rotate(b);
    printf("rb\n");
}

void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    printf("rr\n");
}