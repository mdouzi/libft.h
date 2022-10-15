/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:25:14 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/04 19:44:07 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    int  i;
    char *s;
    i = 0;
    s = (char *)str;
    while(i < (int)n)
    {
        if (s[i] == c)
            return(&s[i]);
        i++;
    }
    return(0);

}