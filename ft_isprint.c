/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfonso.martinez.erades@gmail.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:30:06 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/14 12:11:03 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the character is printable, space included.
*/
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
