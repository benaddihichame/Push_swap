/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/19 14:06:59 by hbenaddi         ###   ########.fr       */
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

int	check_args(char **args)
{
	char	*tmp;

	tmp = *args;
	while (*tmp)
	{
		if (!is_numeric(tmp))
			return (false);
		tmp++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		args = av + 1;
		if (!check_args(args))
			return (1);
	}
	if (init_stack(&a, args) == true)
		sort_stack(&a, &b);
	if (ac == 2)
		free_split(args);
	free_all(&a);
	return (0);
}
