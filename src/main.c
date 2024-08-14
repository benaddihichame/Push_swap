/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/14 13:48:23 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if(one(ac) == 0)
		return 1;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		if (!av)
			return (1);
		init_stack(&a, av);
	}
	else
		init_stack(&a, av + 1);
	if (big_check(ac, av) == 0)
	{
		free_all(&a);
		return (1);
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
	free_all(&a);
	return (0);
}
