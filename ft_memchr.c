/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:13:20 by alfomart          #+#    #+#             */
/*   Updated: 2022/03/10 18:38:28 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
