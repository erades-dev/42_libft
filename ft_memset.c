/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:51:39 by alfomart          #+#    #+#             */
/*   Updated: 2022/03/10 17:03:09 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = dst;
	while (n-- > 0)
		ptr[n] = (unsigned char) c;
	return (dst);
}
