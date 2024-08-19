/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:10:11 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/17 22:49:48 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	stack_sorted(t_stack **box)
{
	t_stack	*tmp;

	if (!box || !(*box))
		return (false);
	tmp = *box;
	while (tmp->next != NULL)
	{
		if (tmp->num > tmp->next->num)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

void	add_node(t_stack **box, int n)
{
	t_stack	*node;
	t_stack	*last;

	if (!box)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->num = n;
	if (!(*box))
	{
		*box = node;
		node->prev = NULL;
	}
	else
	{
		last = search_last(*box);
		last->next = node;
		node->prev = last;
	}
}
