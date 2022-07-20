/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:25:20 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/15 08:32:15 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Appends the NULL-terminated string "src" to the end of "dst".
 *	It will append at most "n" - strlen(dst) - 1 bytes, NULL-terminating
 *	the result.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	max_len;

	dst_len = ft_strlen(dst);
	dst += dst_len;
	src_len = ft_strlen((char *)src);
	if (n <= dst_len)
		return (n + src_len);
	max_len = n - dst_len - 1;
	while (*src && max_len--)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
