/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/10 19:10:56 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_arg(int ac)
{
    if (ac == 1)
    {
        ft_printf("Error\n");
        return (0);
    }
}
void    check_int(char **av)
{
    int i;

    while (av[i])
    {
        if (av[i] != "0123456789")
        {
            ft_printf("Error we only accept numeric arg\n");
            return ;
        }
        i++;
    }
}