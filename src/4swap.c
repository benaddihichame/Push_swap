/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4swap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:01:06 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 15:39:55 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	ft_printf("sa\n");
    }

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*second;

	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ft_printf("sb\n");
}
// static void swapp(t_stack **stack)
// {
//     if (!stack || !*stack || (*stack)->next == NULL)
//         return;
//     int tmp;
//     tmp = (**stack).num;
//     (**stack).num = (**stack).next->num;
//     (**stack).next->num = tmp;
// }
// void    sa(t_stack **a)
// {
//     swapp(a);
//     ft_printf("sa\n");
//     g_move_count++;
// }
// void    sb(t_stack **b)
// {
//     swapp(b);
//     ft_printf("sb\n");
//     g_move_count++;
// }
// void    ss(t_stack **a, t_stack **b)
// {
//     swapp(a);
//     swapp(b);
//     ft_printf("ss\n");
//     g_move_count++;
// }