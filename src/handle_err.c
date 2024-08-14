/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/14 13:49:16 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_int(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_int_2(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == i)
		return 1;
	while (i < ac)
	{
		if (check_int(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
int	one(int ac)
{
	if (ac == 1)
		{
			ft_printf("Error\n");
			return (0);
		}
	return (1);
}

int	big_check(int ac, char **av)
{
	if (check_double(ac, av) == 0)
	{
		ft_printf("Error2\n");
		return (0);
	}
	else if (check_int_2(ac, av) == 0)
	{
		ft_printf("Error3\n");
		return (0);
	}
	return (1);
}