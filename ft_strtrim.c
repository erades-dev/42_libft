/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:26:43 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/19 13:25:00 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Trim from start and end of "s1" all characters in "set"
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		head = 0;
		while (s1[head] && ft_strchr(set, s1[head]))
			head++;
		tail = ft_strlen(s1);
		while (s1[tail -1] && ft_strchr(set, s1[tail -1]) && tail > head)
			tail--;
		str = (char *)malloc(sizeof(char) * (tail - head + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[head], (tail - head + 1));
	}
	return (str);
}
