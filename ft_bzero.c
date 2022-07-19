/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:29:54 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/14 12:30:03 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Set next "n" bytes to 0(zero)
 */
void	ft_bzero(void *dst, size_t n)
{
	ft_memset(dst, 0, n);
}
