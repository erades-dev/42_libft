/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:56:41 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/07 16:11:01 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

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
