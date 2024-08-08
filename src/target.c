/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:10:56 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/08 12:30:04 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *search_target(t_stack *box, t_stack *b)
{
    t_stack *b_min;
    t_stack *b_max;

    b_max = search_max(box);
    b_min = search_min(box);
    if(box->num > b_max->num)
        return (b_max);
    if(box->num < b_min->num)
        return(b_max);
    else
        return(if_target_mid(box, b));
}
t_stack *if_target_mid(t_stack *box, t_stack *b)
{
    t_stack *tmp;
    t_stack *target;
    int diff;

    diff = INT_MAX;
    tmp = b;
    while (tmp)
    {
        if (box->num - tmp->num < diff && box->num - tmp->num > 0)
        {
            target = tmp;
            diff = box->num - tmp->num;
        }
        tmp = tmp->next;
    }
    return (target);
}
int find_push_cost(int position, t_stack **box)
{
    int size;

    size = mod_len(*box);
    printf("%d", size);
    if(position > size / 2)
        return (size - position);
    else
        return (position);
}
void    calcul_distance(t_stack *a_box, t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int index;

    tmp = *a;
    index = 0;
    a_box->target = search_target(a_box, *b);
    // printf("bonjour\n");
    // printf("bonjour %p %d\n", a_box->target, a_box->target->num);
    while(tmp)
    {
        tmp->position = index++;
        if(tmp == a_box)
            break;
        tmp = tmp->next;
    }
    a_box->push_cost = find_push_cost(tmp->position, a);
    tmp = *b;
    index = 0;
    while (tmp)
    {
        tmp->position = index++;
        if(tmp == a_box->target)
            break;
        tmp = tmp->next;
    }
    // printf("bonjour %p\n", tmp);
    a_box->push_cost += find_push_cost(tmp->position, b) + 1;
}
t_stack *find_a_target(t_stack *box, t_stack **a)
{
    t_stack *tmp;
    t_stack *minimum_target;
    int diff;

    tmp = *a;
    diff = INT_MAX;
    minimum_target = NULL;
    while(tmp)
    {
        if(tmp->num - box->num < diff && tmp->num - box->num > 0)
        {
            diff = tmp->num - box->num;
            if(diff == 1)
                break;
        }
        tmp = tmp->next;
    }
    if(!minimum_target)
        minimum_target = search_min(*a);
    return(minimum_target);
}