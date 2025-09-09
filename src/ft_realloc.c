/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:34:05 by pabmart2          #+#    #+#             */
/*   Updated: 2025/09/09 12:37:23 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t size)
{
	char	*new_block;

	if (ptr && size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_block = malloc(size);
	if (!new_block)
		return (NULL);
	if (ptr)
	{
		ft_memcpy(new_block, ptr, old_size);
		free(ptr);
	}
	return (new_block);
}
