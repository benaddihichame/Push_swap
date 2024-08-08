/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:34 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/08 12:30:10 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Recherche et retourne le nœud avec la plus petite valeur dans la pile 'stack'
t_stack *search_min(t_stack *box)
{
    long    minus;
    t_stack *minus_pos;

    minus = LONG_MAX;
    minus_pos = NULL;
    if(!box)
        return (NULL);
    while(box)
    {
        if(box->num < minus)
        {
            minus_pos = box;
            minus = box->num;
        }
        box = box->next;
    }
    return (minus_pos);
}
// Recherche et retourne le nœud avec la plus grande valeur dans la pile 'stack'
t_stack *search_max(t_stack *box)
{
    long max;
    t_stack *max_pos;
   
    if(!box)
        return (NULL);
    max = LONG_MIN;
    max_pos = NULL;
    while(box)
    {
        if (box->num > max)
        {
            max = box->num;
            max_pos = box;
        }
        box = box->next;
    }
    return (max_pos);
}
t_stack *search_cheapest(t_stack **a, t_stack **b)
{
    t_stack *cheapest_box;
    t_stack *tmp;
    int minus_cost;

    tmp = a;
    minus_cost = INT_MAX;
    while(tmp)
    {
        calcul_distance(cheapest_box, a, b);
        if(tmp->push_cost < minus_cost)
        {
            minus_cost = tmp->push_cost;
            cheapest_box = tmp;
        }
        if(cheapest_box->push_cost == 1)
            return(cheapest_box);
        tmp = tmp->next;
    }
    return(cheapest_box);
}
t_stack *search_cheapest(t_stack **a, t_stack **b)
{
    t_stack *cheapest_box;
    t_stack *tmp;
    int minus_cost;

    tmp = a;
    minus_cost = INT_MAX;
    while(tmp)
    {
        calcul_distance(cheapest_box, a, b);
        if(tmp->push_cost < minus_cost)
        {
            minus_cost = tmp->push_cost;
            cheapest_box = tmp;
        }
        if(cheapest_box->push_cost == 1)
            return(cheapest_box);
        tmp = tmp->next;
    }
    return(cheapest_box);
}