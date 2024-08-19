/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/18 11:33:29 by hbenaddi         ###   ########.fr       */
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
