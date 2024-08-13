/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:34 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 11:20:27 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Recherche et retourne le nœud avec la plus petite valeur dans la pile 'stack'
t_stack	*search_max(t_stack **stack)
{
	t_stack	*max;
	t_stack	*tmp;

	max = NULL;
	tmp = *stack;
	while (tmp)
	{
		if (!max || tmp->num > max->num)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}
// Recherche et retourne le nœud avec la plus grande valeur dans la pile 'stack'
t_stack	*search_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*tmp;

	min = NULL;
	tmp = *stack;
	while (tmp)
	{
		if (!min || tmp->num < min->num)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
int pushcost_from_pos(int pos, t_stack **stack)
{
    int size;

    size = mod_len(stack);
    if (pos > size / 2)
        return (size - pos);
    else
        return(pos);
}
void    target_and_cost(t_stack *a_box, t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int index;

    tmp = *a;
    index = 0;
    a_box->target = search_target_box(a_box, b);
    while(tmp)
    {
        tmp->position = index++;
        if (tmp == a_box)
            break;
        tmp = tmp->next;
    }
    a_box->push_cost = pushcost_from_pos(tmp->position, a);
    index = 0;
    tmp = *b;
    while (tmp)
    {
        tmp->position = index++;
        if (tmp == a_box->target)
            break;
        tmp = tmp->next;
    }
    a_box->push_cost += pushcost_from_pos(tmp->position, b) + 1;
}
t_stack *search_cheapest(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    t_stack *cheapest_box;
    int discount;

    tmp = *a;
    discount = INT_MAX;
    while(tmp)
    {
        target_and_cost(tmp, a, b);
        if(tmp->push_cost < discount)
        {
            discount = tmp->push_cost;
            cheapest_box = tmp;
        }
        if (cheapest_box->push_cost == 1)
            return(cheapest_box);
        tmp = tmp->next;
    }
    return(cheapest_box);
}