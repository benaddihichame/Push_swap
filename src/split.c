/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:57:14 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/26 09:52:20 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int count_word(char *str, char separator)
{
    bool in_word;
    int count;

    count = 0;
    while(*str)
    {
        while(*str == separator)
            str++;
        in_word = false;
        while (*str && str != separator)
        {
            if(!in_word)
            {
                count++;
                in_word = true;
            }
            str++;
        }
    }
    return (count);
}
char    **splitt(char *str, char separator)
{
    int

}