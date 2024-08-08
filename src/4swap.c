/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4swap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:01:06 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/06 21:05:31 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void swapp(t_stack **stack)
{
    if (!stack || !*stack || (*stack)->next == NULL)
        return;
    int tmp;
    tmp = (**stack).num;
    (**stack).num = (**stack).next->num;
    (**stack).next->num = tmp;
}
void    sa(t_stack **a)
{
    swapp(a);
    ft_printf("sa\n");
}
void    sb(t_stack **b)
{
    swapp(b);
    ft_printf("sb\n");
}
void    ss(t_stack **a, t_stack **b)
{
    swapp(a);
    swapp(b);
    ft_printf("ss\n");
}