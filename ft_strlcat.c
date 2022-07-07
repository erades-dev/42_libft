/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 05:40:28 by alfomart          #+#    #+#             */
/*   Updated: 2022/03/11 07:05:53 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	max_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (n <= dst_len)
		return (n + src_len);
	max_len = n - dst_len - 1;
	dst += dst_len;
	while (*src && max_len--)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
