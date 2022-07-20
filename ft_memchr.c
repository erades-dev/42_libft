/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:13:20 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/20 07:13:39 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Find first occurrence of "c" (converted to an unsigned char) in "src".
 *  Returns a pointer to the byte, or NULL if not found within "n" bytes.
 */

void	*ft_memchr(const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
