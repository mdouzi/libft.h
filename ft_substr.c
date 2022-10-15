/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:02:55 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/09 17:37:07 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t j;
    size_t b;
    if (!s)
        return (NULL);
    i = (int)start;
    j = 0;
    b = ft_strlen(s);
    str = (char *)malloc(sizeof(char)*(len + 1));
    if (!str)
        return (NULL);
    while(s && j < len && start < b)
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}

