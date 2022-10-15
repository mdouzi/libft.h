/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 05:55:28 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/09 21:44:40 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    char *str;
    str = (char *)s;
    while (*str != c)
    {
        if (*str == '\0')
            return (NULL);
        str++;
    }
    return (str);
}