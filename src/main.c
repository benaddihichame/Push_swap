/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:06:37 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/15 14:09:22 by hbenaddi         ###   ########.fr       */
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
    while (i < ac)
    {
        if (check_int(tmp[i]) == 0)
            return (1);
        i++;
    }
    if (stack_sorted(a) == false)
    {
        if (mod_len(&a) == 2)
            sa(&a, true);
        else if (mod_len(&a) == 3)
            three_a();
        else 
            sort(a);
        
    }
    return (0);
}
