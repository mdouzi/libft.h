/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:20:35 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/10 21:44:11 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len;
    char *new;
    
    if(!s1)
        return NULL;
    while(*s1 && ft_strchr(set,*s1))
        s1++;
    len = ft_strlen(s1);
    while(len && ft_strchr(set,s1[len - 1]))
        len--;
    new = ft_substr(s1,0,len);
    return new;
}

