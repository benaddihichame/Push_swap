/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/16 15:24:17 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
void init_stack(t_stack **a, char **av)
{
    long num;
    int i = 1;
    
    while(av[i])
    {
        num = ft_atol(av[i]);
        add_node(a, (int)num);
        i++;
    }
}
void print_stack(t_stack *stack)
{
    t_stack *current = stack;
    while (current)
    {
        printf("%d\n", current->num);
        current = current->next;
    }
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
int main(int ac, char **av)
{
    t_stack *a;
    //t_stack *b;
    //int i;
    //char **tmp;

    a = NULL;
    //b = NULL;
  //  i = 1;
   //tmp = NULL;
    if (big_check(ac, av) == 0)
             return (1);
    //**tmp = ft_split(av[i], ' ');    
    init_stack(&a, av);
    printf("Contenu de la pile:\n");
    print_stack(a);
   int j =  mod_len(a);
   printf("j is : %d\n", j);
    if (stack_sorted(a) == false)
    {
        if (mod_len(a) == 2)
            sa(&a, true);
        else if (mod_len(a) == 3)
            three_node(&a);
        // else 
        //     sort(a);
    }
    printf("result:\n");
    print_stack(a);
    return (0);
}
