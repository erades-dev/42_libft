/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:54:44 by alfomart          #+#    #+#             */
/*   Updated: 2022/03/10 19:16:19 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  Compares string "str1" against "str2" for "n" bytes. 
 *  Returns 0 if they are identical, otherwise returns the difference.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char	*s1;
	unsigned const char	*s2;

	s1 = str1;
	s2 = str2;
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
