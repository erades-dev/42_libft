/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:18:51 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/19 19:32:02 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 *	Set next "n" bytes of value "ch" (unsigned char) to the string dst.
 */
void	*ft_memset(void *dst, int ch, size_t n)
{
	unsigned char	*ptr;

	ptr = dst;
	while (n-- > 0)
		ptr[n] = (unsigned char) ch;
	return (dst);
}
