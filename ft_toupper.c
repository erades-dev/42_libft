/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:20:30 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/19 11:21:17 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Returns the capitalized version of a minuscule letter.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
