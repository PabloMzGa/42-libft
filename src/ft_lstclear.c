/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:24:02 by pabmart2          #+#    #+#             */
/*   Updated: 2025/09/09 12:23:38 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	if (*lst && (*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone((*lst), del);
	(*lst) = NULL;
}
