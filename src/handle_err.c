/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:54:22 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/24 16:29:06 by hbenaddi         ###   ########.fr       */
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