/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:19:20 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/20 10:31:25 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Allocates memory for an array of num objects of size
 * and initializes all bytes in the allocated storage to zero. 
 */
void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(size * num);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * num);
	return (ptr);
}
