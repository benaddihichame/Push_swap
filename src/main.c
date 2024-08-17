/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/17 23:20:41 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

 void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_sorted(a))
		return ;
	if (mod_len(a) == 2)
		sa(a);
	else if (mod_len(a) == 3)
		three_node(a);
	else
		algo(a, b);
}

// static int	handle_single_argument(char **av, t_stack **a)
// {
// 	av = ft_split(av[1], ' ');
// 	if (!av || !av[0])
// 	{
// 		free_split(av);
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	if (!big_check(0, av))
// 	{
// 		free_split(av);
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	init_stack(a, av);
// 	return (1);
// }

// static int	handle_multiple_arguments(int ac, char **av, t_stack **a)
// {
// 	if (!big_check(ac, av))
// 	{
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	init_stack(a, av + 1);
// 	return (1);
// }

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		free_args;

	a = NULL;
	b = NULL;
	free_args = 0;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		free_args = 1;
	}
	else
		args = av + 1;
	init_stack(&a, args);
	sort_stack(&a, &b);
	if (free_args)
		free_split(args);
	free_all(&a);
	return (0);
}
