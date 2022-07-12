/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erades <alfomart@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:49:58 by erades            #+#    #+#             */
/*   Updated: 2022/07/12 13:56:28 by erades           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 *	Counts the number of nodes on list "lst".
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	while (lst->next)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
