/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:32 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/15 19:50:37 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word_len(char const *s, char c)
	{
	    int len;
	    int i;
    	i = 0;
	    len = 0;
	    if(s[i] == c && s[i])
	        i++;
	        while(s[i] && s[i] != c)
	        {  
		    	i++;
	          len++;
	        }    
	    return (len);
	}

static int word_number(char const *s, char c)
{
    int word_n;
                          
    word_n = 0; 
    while(*s && *s == c)
      s++;
    while(*s)
    {
      word_n++;
      while(*s && *s != c)
        s++;
       while(*s && *s == c)
          s++;
    }
    return(word_n);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int j;
    int i;
    int n;
    int go;
	
	if(!s)
		return NULL;
	j = 0;
	n = 0;
    i = word_number(s, c);
    str = (char **)malloc(sizeof(char *) * (i + 1));
	if(!str)
		return NULL;                                                                                                                                                                                                                                                                                                                                                                
    while(s[n])
	{
		while(s[n] && s[n] == c)
			n++;
		if(s[n] != c && j < i) // j <= i
		{
			go = word_len(s + n, c);
			str[j] = ft_substr(s, n, go);
			j++;
		}
		while (s[n] && s[n] != c)
			n++;
	}
	str[j] = NULL;
    return(str);
}