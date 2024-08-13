/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:33:24 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 11:22:06 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*search_target_box(t_stack *a_box, t_stack **b)
{
	t_stack	*bmax;
	t_stack	*bmin;

	if (!a_box || !b || !*b)
		return (NULL);
	bmax = search_max(b);
	bmin = search_min(b);
	if (a_box->num > bmax->num)
		return (bmax);
	if (a_box->num < bmin->num)
		return (bmax);
	else
		return (search_target_mid(a_box, b));
}

t_stack	*search_target_mid(t_stack *a_box, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*target;
	int		diff;

	tmp = *b;
	diff = INT_MAX;
	while (tmp)
	{
		if (a_box->num - tmp->num < diff && a_box->num - tmp->num > 0)
		{
			target = tmp;
			diff = a_box->num - tmp->num;
		}
		tmp = tmp->next;
	}
	return (target);
}

t_stack	*search_target_to_a(t_stack *box, t_stack **a)
{
	t_stack	*tmp;
	t_stack	*target_minus;
	int		diff;

	tmp = *a;
	target_minus = NULL;
	diff = INT_MAX;
	while (tmp)
	{
		if (tmp->num - box->num < diff && tmp->num - box->num > 0)
		{
			diff = tmp->num - box->num;
			target_minus = tmp;
			if (diff == 1)
				break ;
		}
		tmp = tmp->next;
	}
	if (!target_minus)
		target_minus = search_min(a);
	return (target_minus);
}
