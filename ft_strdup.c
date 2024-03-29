/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:58:58 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/15 12:58:13 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Returns a pointer to a null-terminated string, which is an allocated
 *	duplicate of the string "src".
 */
char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = ft_strlen(src) + 1;
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
