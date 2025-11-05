/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:54:17 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 17:59:54 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n > 0 && *((unsigned char *) s) == c)
		return ((void *) s);
	if (n <= 0)
		return (NULL);
	return (ft_memchr(s + 1, c, n - 1));
}
