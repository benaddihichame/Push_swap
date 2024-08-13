/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 15:38:46 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*current;

	tmp = *b;
	*b = tmp->next;
	tmp->next = NULL;
	current = *b;
	while (current->next)
		current = current->next;
	current->next = tmp;
	ft_printf("rb\n");
}

void	ra(t_stack **a)
{   
	t_stack	*tmp;
	t_stack	*current;

	tmp = *a;
	*a = tmp->next;
	tmp->next = NULL;
	current = *a;
	while (current->next)
		current = current->next;
	current->next = tmp;
	ft_printf("ra\n");
}

// static void rotate(t_stack **stack)
// {
//     if (!stack || !*stack || (*stack)->next == NULL)
//         return;
//     t_stack *tmp;
//     t_stack *first;
    
//     first = *stack;
//     tmp = *stack;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     tmp->next = first;
//     *stack = first->next;
//     first->next = NULL;
// }

// void ra(t_stack **a)
// {
//     rotate(a);
//     printf("ra\n");
//     g_move_count++;
// }

// void rb(t_stack **b)
// {
//     rotate(b);
//     printf("rb\n");
//     g_move_count++;
// }

// void rr(t_stack **a, t_stack **b)
// {
//     rotate(a);
//     rotate(b);
//     printf("rr\n");
//     g_move_count++;
// }