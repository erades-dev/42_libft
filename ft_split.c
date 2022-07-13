/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:14:01 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/13 11:29:06 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	word_count(const char *str, char c)
{
	int	i;
	int	word_flag;

	i = 0;
	word_flag = 0;
	while (*str)
	{
		if (!word_flag && *str != c)
		{
			i++;
			word_flag = 1;
		}
		else if (*str == c)
		{
			word_flag = 0;
		}
		str++;
	}
	return (i);
}

void	word_str_len(char **ptr, int *len, char c)
{
	unsigned int	i;

	*ptr += *len;
	*len = 0;
	i = 0;
	while (**ptr && **ptr == c)
		(*ptr)++;
	while ((*ptr)[i])
	{
		if ((*ptr)[i] == c)
			return ;
		(*len)++;
		i++;
	}
}

/*
 *	Creates an array of strings by splitting "s" using "c" as a delimiter.
 *	The last element of the array is a null pointer.
 */
char	**ft_split(char const *s, char c)
{	
	char	**tab;
	char	*next_ptr;
	int		next_len;
	int		words;
	int		i;

	words = word_count(s, c);
	tab = (char **) malloc (sizeof (char *) * (words + 1));
	if (!tab)
		return (NULL);
	next_ptr = (char *)s;
	next_len = 0;
	i = 0;
	while (i < words)
	{
		word_str_len(&next_ptr, &next_len, c);
		tab[i] = (char *) malloc(sizeof(char) * (next_len + 1));
		if (!tab[i])
			while (*tab)
				free(*tab++);
		ft_strlcpy(tab[i], next_ptr, next_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
