/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:14:01 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/14 10:35:42 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	str_count(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	*str_next(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

static void	tab_clear(char **tab)
{
	char	**pos;

	if (tab == NULL)
		return ;
	pos = tab;
	while (*pos)
	{
		free(*pos);
		*pos = NULL;
		pos++;
	}
	free(tab);
	tab = NULL;
}

/*
 *	Creates an array of strings by splitting "s" using "c" as a delimiter.
 *	The last element of the array is a null pointer.
 */
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		strings;
	int		i;

	strings = str_count(s, c);
	tab = malloc(sizeof(char *) * (strings + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < strings)
	{
		while (*s == c)
			s++;
		tab[i] = str_next(s, c);
		if (!tab[i])
			tab_clear(tab);
		s += ft_strlen(tab[i]);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
