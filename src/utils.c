/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:35:38 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/12 12:18:44 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
	*s == '\r' || *s == '\v' || *s == '\f')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (sign == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}

int	mod_len(t_stack **node)
{
	int		i;
	t_stack	*tmp;

	tmp = *node;
	if (!node)
		return (0);
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	free_all(t_stack **box)
{
	t_stack	*memo;
	t_stack	*curr;

	curr = *box;
	if (!box)
		return ;
	while (curr)
	{
		memo = curr->next;
		free(curr);
		curr = memo;
	}
	*box = NULL;
}

t_stack	*search_last(t_stack *box)
{
	if (!box)
		return (NULL);
	while (box->next)
		box = box->next;
	return (box);
}
