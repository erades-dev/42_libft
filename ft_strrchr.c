/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:08:53 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/07 14:21:42 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			*last;

	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			last = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (last);
}
