/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 13:13:16 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int g_move_count = 0;

void display_final_count()
{
    printf("Total number of moves: %d\n", g_move_count);
}

void print_stack(t_stack **stack)
{
    t_stack *current;

    if (stack == NULL || *stack == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    current = *stack;

    printf("Stack contents:\n");
    while (current != NULL)
    {
        printf("%d\n", current->num);
        current = current->next;
    }
}

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if (big_check(ac, av) == 0)
             return (1);
    init_stack(&a, av);
    print_stack(&a);
    if(stack_sorted(&a) == false)
    {
        printf("Stack is not sorted\n");
    }
    if (stack_sorted(&a) == false)
    {
        if (mod_len(&a) == 2)
            sa(&a);
        else if (mod_len(&a) == 3)
            three_node(&a);
        else
            algo(&a, &b);
    }
    print_stack(&a);
    display_final_count();
    if(stack_sorted(&a) == true)
    {
        printf("Stack is sorted\n");
    }
    free_all(&a);
    return (0);
}
