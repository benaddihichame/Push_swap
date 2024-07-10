/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:57:14 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/10 11:35:44 by hbenaddi         ###   ########.fr       */
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

static char *get_next_word(char *s, char c)
{
    static int cursor = 0;
    char    *next_word;
    int len;
    int i;

    i = 0;
    len = 0;
    while(s[cursor] == c)
        cursor++;
    while((s[cursor + len] != c) && s[cursor + len])
        len++;
    next_word = malloc((size_t)len * sizeof(char) + 1);
    if (next_word == NULL)
        return (NULL);
    while(s[cursor] != c && s[cursor])
    {
        next_word[i] = s[cursor];
        i++;
        cursor++;
    }
    next_word[i] = '\0';
    return (next_word);
}
char    **modsplit(char *str, char separator)
{
    int nbr_word;
    char    **res;
    int i;

    i = 0;
    nbr_word = count_word(str, separator);
    if (nbr_word == NULL)
        return (NULL);
    res = malloc(sizeof(char *) * (size_t)nbr_word + 2);
    if (res == NULL)
        return (NULL);
    while (nbr_word >= 0)
    {
        if (i == 0)
        {
            res[i] = malloc(sizeof(char));
            if (res[i] == NULL)
                return (NULL);
            
        }

    }
    
    res[i] = '\0';
    return (res);

}