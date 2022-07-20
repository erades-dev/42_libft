/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:15:28 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/19 11:19:02 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Return minuscule version of a capital letter.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
