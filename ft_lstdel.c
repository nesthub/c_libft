/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:05:31 by mlinhard          #+#    #+#             */
/*   Updated: 2015/12/03 20:23:21 by mlinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (!alst || !del)
		return ;
	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}