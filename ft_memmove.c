/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:17:42 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 13:27:43 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_rev_memcpy(void *dest, const void *src, size_t n)
{
	if (n <= 0)
	{
		return (dest);
	}
	*((char *) dest) = *((char *) src);
	ft_memcpy(dest - 1, src - 1, n - 1);
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		ft_rev_memcpy(dest + n, src + n, n);
	return (dest);
}
