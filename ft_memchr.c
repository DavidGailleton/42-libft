/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:54:17 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/06 11:13:18 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n <= 0)
		return (NULL);
	if (*(unsigned char *) s == (unsigned char) c)
		return ((void *) s);
	return (ft_memchr(s + 1, c, n - 1));
}
