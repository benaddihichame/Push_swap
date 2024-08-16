/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/15 20:09:20 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void free_split(char **split)
{
    int i;

    if (!split)
        return;

    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}
void sort_stack(t_stack **a, t_stack **b)
{
    if (stack_sorted(a))
        return;
    
    if (mod_len(a) == 2)
        sa(a);
    else if (mod_len(a) == 3)
        three_node(a);
    else
        algo(a, b);
    
    while (!stack_sorted(a))
        rra(a);
}

void before_start(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if (ac == 2)
    {
        av = ft_split(av[1], ' ');
        if (!av)
			return ;
        init_stack(&a, av);
    }
    else
        init_stack(&a, av + 1);
    if (!big_check(ac, av))
    {
        free_all(&a);
        ft_printf("Error\n");
        return ;
    }
    sort_stack(&a, &b);
    free_split(av);
    free_all(&a);
}
int	main(int ac, char **av)
{
	if(ac == 1)
		return (0);
	before_start(ac, av);
	return (0);
}
