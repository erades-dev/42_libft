/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:27:41 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/08 12:07:00 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *Returns allocated substring from start, with max len
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len2;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	len2 = ft_strlen(s + start);
	if (len2 < len)
		len = len2;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}
