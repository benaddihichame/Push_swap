/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/17 23:20:39 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	has_duplicate(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->num == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	init_stack(t_stack **a, char **av)
{
	long	num;
	int		i;

	i = 0;
	while (av[i])
	{
		if (!is_numeric(av[i]))
		{
			ft_printf("Error\n");
			free_all(a);
			exit(1);
		}
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN || has_duplicate(*a, (int)num))
		{
			ft_printf("Error\n");
			free_all(a);
			exit(1);
		}
		add_node(a, (int)num);
		i++;
	}
}
