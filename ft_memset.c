/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:51:39 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/08 07:58:25 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Copies the value (unsigned char)ch into each of the first count characters
 * of the object pointed to by dest.
 */
void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*ptr;

	ptr = dest;
	while (count-- > 0)
		ptr[count] = (unsigned char) ch;
	return (dest);
}
