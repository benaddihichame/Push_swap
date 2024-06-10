/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/10 20:52:03 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    check_arg(int ac)
{
    if (ac == 1)
    {
        printf("Error\n");
        return ;
    }
}
void    check_int(char **av)
{
    int i;

    while (av[i])
    {
        if (ft_isdigit(av[i]) == 0)
        {
            printf("Error we only accept numeric arg\n");
            return ;
        }
        printf("ok");
        i++;
    }
}