/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:03:46 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/16 19:53:54 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char ft_bb(unsigned int i , char c)
// {   
//     if(c == 'a')
//         i = 'k';
//     return(c);
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    int len;
    len = ft_strlen(s);
    int i;
    i = 0;
    if(!s)
        return(NULL);

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return(NULL);
    
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
#include "libft.h"

// int main(){
    
//     printf("%s",ft_strmapi("aaaa",ft_bb));
//     return 0;
    
// }

