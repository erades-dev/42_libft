/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:41:55 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/14 12:41:21 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Copies "n" bytes from string "src" to string "dst",
 *	the copy is always done in a non-destructive manner.
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (unsigned char *) dst;
	s2 = (unsigned char *) src;
	if (src > dst)
		while (n--)
			*s1++ = *s2++;
	else
		while (n--)
			s1[n] = s2[n];
	return (dst);
}
