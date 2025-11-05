/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:46:16 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 17:02:06 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (n <= 0)
		return (dest);
	*((unsigned char *) dest) = *((unsigned char *) src);
	ft_memcpy(dest + 1, src + 1, n - 1);
	return (dest);
}
