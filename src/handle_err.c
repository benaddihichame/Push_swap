/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/02 17:33:36 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    check_arg(int ac)
{
    if (ac == 1)
    {
        printf("Error\n");
        return (1);
    }
    else
        return(0);
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
long ft_atol(const char *s)
{
    long result;
    int sign;

    result = 0;
    sign = 1;
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\v' || *s == '\f')
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