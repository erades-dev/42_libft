/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:14:01 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/08 12:48:27 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *str, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

char	*word_dup(const char *str, int start, int end)
{
	char	*dup;
	int		len;

	len = end - start;
	dup = malloc(sizeof(char) * (len + 1));
	dup[len] = '\0';
	while (len-- > 0)
		dup[len] = str[start + len];
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	int		index;

	array = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!array || !s)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			array[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
