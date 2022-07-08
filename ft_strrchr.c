/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:08:53 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/08 09:59:56 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Finds the last occurrence of ch.
 */
char	*ft_strrchr(const char *str, int ch)
{
	unsigned int	i;
	char			*last;

	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			last = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)ch)
		return ((char *)&str[i]);
	return (last);
}
