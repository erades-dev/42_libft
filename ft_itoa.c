/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:49:57 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/08 08:56:54 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		count++;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			digit;
	long int	ln;

	ln = n;
	digit = ft_digit_count(ln);
	str = malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digit--] = '\0';
	if (ln == 0)
	{
		str[0] = '0';
	}
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		str[digit--] = ln % 10 + '0';
		ln /= 10;
	}
	return (str);
}
