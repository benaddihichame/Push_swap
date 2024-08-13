/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3reverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:22:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 15:37:58 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*newhead;

	tmp = *a;
	head = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	newhead = tmp->next;
	tmp->next = NULL;
	newhead->next = head;
	*a = newhead;
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*newhead;

	tmp = *b;
	head = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	newhead = tmp->next;
	tmp->next = NULL;
	newhead->next = head;
	*b = newhead;
	ft_printf("rrb\n");
}

// static void reverse(t_stack **stack)
// {
//     if (!stack || !*stack || (*stack)->next == NULL)
//         return ;
//     t_stack *prev;
//     t_stack *last;

//     prev = NULL;
//     last = *stack;
//     while (last->next != NULL)
//     {
//         prev = last;
//         last  = last->next;
//     }
//     if (prev)
//     {
//         prev->next = NULL;
//         last->next = *stack;
//         *stack = last;
//     }
// }
// void    rra(t_stack **a)
// {
//    reverse(a);
//    ft_printf("rra\n");
//    g_move_count++;
// }
// void    rrb(t_stack **b)
// {
//     reverse(b);
//     ft_printf("rrb\n");
//     g_move_count++;
// }
// void    rrr(t_stack **a, t_stack **b)
// {
//     reverse(a);
//     reverse(b);
//     ft_printf("rrr\n");
//     g_move_count++;
// }