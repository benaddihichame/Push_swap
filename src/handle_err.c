/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/16 15:07:16 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    check_arg(int ac)
{
    if (ac == 1)
    {
        printf("Error wrong number of arg\n");
        return (1);
    }
    else
        return(0);
}
int count_args(int ac, char **av)
{
    int i;
    int count;

    i = 1;
    count = 0;
    while (i < ac)
    {
        if (check_int(av[i]) == 1)
            count++;
        i++;
    }
    return (count);
}
int check_double(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while(i < ac)
    {
        j = i + 1;
        while(j < ac)
        {
            if(ft_atol(av[i]) == ft_atol(av[j]))
            {
                ft_printf("Error: Duplicated Value!!\n");
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}
int    check_int(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (str[i] == '\0')
        return (0);
    while (str[i])
    {
        if (ft_isdigit(str[i]) == 0)
        {
            printf("Error we only accept numeric arg\n");
            return (0);
        }
        i++;
    }
    return (1);
}
int check_int_2(int ac, char **av)
{
    int i;

    i = 1;
    while (i < ac)
    {
        if (check_int(av[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}
int big_check(int ac, char **av)
{
    if(check_double(ac ,av) == 0)
        return (0);
    else if(check_arg(ac) == 1)
        return (0);
    else if(check_int_2(ac ,av) == 0)
        return (0);
    else 
        return (1);
}