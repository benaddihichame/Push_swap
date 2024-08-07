/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:10:11 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/07 16:12:32 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void init_stack(t_stack **a, char **av)
{
    long num;
    int i = 1;
    
    while(av[i])
    {
        num = ft_atol(av[i]);
        if(num > INT_MAX || num < INT_MIN)
        {
            free_all(a);
        }
        add_node(a, (int)num);
        i++;
    }
}

bool    stack_sorted(t_stack **box)
{
    if(!box)
        return (false);
    t_stack *tmp;
    tmp = *box;
    while(tmp->next != NULL)
    {
        if(tmp->num > tmp->next->num)
            return (false);
        tmp = tmp->next;
    }
    return (true);
}

// ajoute un nouveau cube a la fin de la pile ou le met en premier
void add_node(t_stack **box, int n)
{
    t_stack *node;
    t_stack *last;

    if(!box)
        return;
    node = malloc(sizeof(t_stack));
    if(!node)
        return;
    node->next = NULL;
    node->num = n;
    if(!(*box))
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