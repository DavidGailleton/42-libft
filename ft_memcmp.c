/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:00:38 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/06 11:17:32 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n <= 0)
		return (0);
	if (*(unsigned char *) s1 > *(unsigned char *) s2)
		return (1);
	if (*(unsigned char *) s1 < *(unsigned char *) s2)
		return (-1);
	return (ft_memcmp(s1 + 1, s2 + 1, n - 1));
}
