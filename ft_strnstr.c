/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:25:22 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/06 01:17:32 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t        i;
    size_t        j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    if (len == 0)
        return (NULL);
    i = 0;
    j = 0;
    while(i <= len)
    {
        if (needle[j] == '\0')
            return ((char *)(&haystack[i - j]));
        if (haystack[i] == needle[j])
            j++;
        else
            j = 0;
        i++;
    }
    return (NULL);
}
