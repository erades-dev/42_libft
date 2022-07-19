/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:49:57 by alfomart          #+#    #+#             */
/*   Updated: 2022/07/14 10:53:35 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

/*
 * Takes an int, and converts it to a null-terminated string.
 */
char	*ft_itoa(int n)
{
	char		*str;
	int			digit;
	long int	ln;

	ln = n;
	digit = digit_count(ln);
	str = malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digit--] = '\0';
	if (ln == 0)
		str[0] = '0';
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
