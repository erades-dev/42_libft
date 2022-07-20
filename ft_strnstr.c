/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:25:29 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/07 12:29:58 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *   locate a substring in a string (size-bounded).
 */
char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	i;

	if (!*sub)
		return ((char *)str);
	while (*str && n > 0)
	{
		i = 0;
		while (str[i] == sub[i] && (n - i) > 0)
			if (!sub[++i])
				return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
