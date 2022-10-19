/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:07:36 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/19 23:37:14 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_1;
	size_t	len_2;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	len = (len_1 + len_2) + 1;
	str = (char *)malloc(1 * len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, (char *)s1, (len_1 + 1));
	ft_strlcat(str, (char *)s2, len);
	return (str);
}
