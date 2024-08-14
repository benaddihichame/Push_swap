/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 15:41:53 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char **split_args;
	a = NULL;
	b = NULL;
	if (ac == 2)
    {
        split_args = ft_split(av[1], ' ');
		printf
        if (!split_args)
            return (1);
        init_stack(&a, split_args);
	}
	else
		init_stack(&a, av);
	if (big_check(ac, av) == 0)
		return (1);
	if (stack_sorted(&a) == false)
	{
		if (mod_len(&a) == 2)
			sa(&a);
		else if (mod_len(&a) == 3)
			three_node(&a);
		else
			algo(&a, &b);
	}
	free_all(&a);
	return (0);
}
