/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/10 15:21:30 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    int i;
    char **tmp;

    a = NULL;
    b = NULL;
    i = 1;
    tmp = NULL;
    if (check_arg(ac) == 1)
        return (1);
    **tmp = ft_split(av[i], ' ');
    if (stack_sorted(a) == false)
    {
        
    }
    while (i < ac)
    {
        if (!check_int(tmp[i]))
            return (1);
        i++;
    }
    printf("oui\n");
    return (0);
}