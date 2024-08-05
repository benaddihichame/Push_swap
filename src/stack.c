/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:10:11 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/05 16:30:20 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// ajoute un nouveau cube a la fin de la pile ou le met en premier
static void add_node(t_stack **stack, int n)
{
    t_stack *node;
    t_stack *last;

    if(!stack)
        return;
    node = malloc(sizeof(t_stack));
    if(!node)
        return;
    node->next = NULL;
    node->num = n;
    if(!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last = search_last(*stack);
        last->next = node;
        node->prev = last;
    }
}
void    set_midle(t_stack *stack)
{
    int i;
    int mid;

    i = 0;
    if(!stack)
        return ;
    mid = mod_len(stack) / 2;
    while (stack)
    {
        stack->position = i;
        if(i < mid)
            stack->above_med = true;
        else
            stack->above_med = false;
        stack = stack->next;
    }
}
void    prep_algo(t_stack *a, t_stack *b)
{
    set_midle(a);
    set_midle(b);
    search_target_node(a, b);
    search_cost(a, b);
    search_cheap();
}
void sort(t_stack **a, t_stack **b)
{
    int len_a;

    len_a = mod_len(*a);
    if (len_a > 3 && !stack_sorted(a))
    {
        pb(a, b, true);
        len_a--;
    }
    if (len_a > 3 && !stack_sorted(a))
    {
        pb(a, b, true);
        len_a--;
    }
    while (len_a > 3 && !stack_sorted(a))
    {
        prep_algo(*a, *b);
        //create function to move b to a 
        len_a--;
    }
    three_node(a);
    search_target_node(a, b);
    //fonction pour above_mediane
    search_cost(a, b);
}

void    three_node(t_stack **a)
{
    t_stack *max;

    max = search_max(*a);
    if(max == *a)
        ra(a, true);
    else if((*a)->next == max)
        rra(a, true);
    if((*a)->num > (*a)->next->num)
        sa(a, true);
}