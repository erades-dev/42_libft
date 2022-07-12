/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erades <alfomart@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:00:10 by erades            #+#    #+#             */
/*   Updated: 2022/07/12 13:18:44 by erades           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
