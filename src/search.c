/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:34 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/02 17:49:56 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Recherche et retourne le nœud avec la plus petite valeur dans la pile 'stack'

t_stack *search_min(t_stack *stack)
{
    long    minus;
    t_stack *minus_pos;

    minus = LONG_MAX;
    minus_pos = NULL;
    if(!stack)
        return (NULL);
    while(stack)
    {
        if(stack->num < minus)
        {
            minus_pos = stack;
            minus = stack->num;
        }
        stack = stack->next;
    }
    return (minus_pos);
}
// Recherche et retourne le nœud avec la plus grande valeur dans la pile 'stack'

t_stack *search_max(t_stack *stack)
{
    long max;
    t_stack *max_pos;
   
    if(!stack)
        return (NULL);
    max = LONG_MIN;
    max_pos = NULL;
    while(stack)
    {
        if (stack->num > max)
        {
            max = stack->num;
            max_pos = stack;
        }
        stack = stack->next;
    }
    return (max_pos);
}
// Recherche et retourne le dernier nœud dans la pile 'stack'

t_stack *search_last(t_stack *stack)
{
    if(!stack)
        return(NULL);
    while(stack->next)
        stack = stack->next;
    return(stack);
}
// Calcule et assigne le coût de chaque opération de push pour chaque nœud de la pile 'b'

void    search_cost(t_stack *a, t_stack *b)
{
    int len_a;
    int len_b;

    len_a = mod_len(a);
    len_b = mod_len(b);
    while(b)
    {
        b->push_cost = b->position;
        if(!b->above_med)
            b->push_cost = len_b - (b->position);
        if(b->target->above_med)
            b->push_cost += b->target->position;
        else
            b->push_cost += len_a - (b->target->position);
        b = b->next;
    }
}
// Cherche et assigne le nœud cible de la pile 'a' pour chaque nœud de la pile 'b'
// Le nœud cible est le plus petit nœud dans 'a' qui est supérieur au nœud actuel de 'b'
void    search_target_node(t_stack *a, t_stack *b)
{
    t_stack *current_node_a;
    t_stack *target_node;
    long    smallest_greater_value;

    while(b)
    {
        smallest_greater_value = LONG_MAX;
        current_node_a = a;
        while(current_node_a)
        {
            if(current_node_a->num > b->num && current_node_a < smallest_greater_value)
            {
                smallest_greater_value = current_node_a->num;
                target_node = current_node_a;
            }
            current_node_a = current_node_a->next;
        }
        if(smallest_greater_value == LONG_MAX)
            b->target = search_min(a);
        else
            b->target = target_node;
        b = b->next;
    }
}