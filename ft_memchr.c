/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabmart2 <pabmart2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:35:21 by pabmart2          #+#    #+#             */
/*   Updated: 2024/09/13 14:52:51 by pabmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp_s;
	unsigned char		temp_c;

	temp_s = (const unsigned char *)s;
	temp_c = (unsigned char)c;
	while (n--)
	{
		if (*temp_s == temp_c)
			return ((void *)temp_s);
		++temp_s;
	}
	return (NULL);
}
