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
