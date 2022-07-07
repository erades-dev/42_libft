/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:01:09 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/07 16:40:29 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !src)
		return (dst);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n--)
		s1[n] = s2[n];
	return (dst);
}
