/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_low_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabmart2 <pabmart2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:08:11 by pabmart2          #+#    #+#             */
/*   Updated: 2024/11/21 18:32:49 by pabmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/ft_printf/ft_printf.h"
int	x_low_printer(va_list arg)
{
	char			*str;
	unsigned int	un;
	size_t			len;

	un = (unsigned int)va_arg(arg, int);
	str = ft_uitob(un, "0123456789abcdef");
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
