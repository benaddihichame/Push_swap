/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:10:11 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/10 15:41:30 by hbenaddi         ###   ########.fr       */
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
void    init_stack(t_stack **a, char **argv)
{
    long    n;
    int i;

    while(argv[i])
    {
        
    }
}