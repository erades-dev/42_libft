/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erades <alfomart@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:00:10 by erades            #+#    #+#             */
/*   Updated: 2022/07/13 07:33:09 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Creates a new node containing "content".
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = malloc(sizeof(t_list));
	if (!tab)
		return (NULL);
	tab->next = NULL;
	tab->content = content;
	return (tab);
}
