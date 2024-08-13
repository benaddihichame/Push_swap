/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 12:14:04 by hbenaddi         ###   ########.fr       */
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
    g_move_count++;
}

void rb(t_stack **b)
{
    rotate(b);
    printf("rb\n");
    g_move_count++;
}

void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    printf("rr\n");
    g_move_count++;
}