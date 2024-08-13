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
