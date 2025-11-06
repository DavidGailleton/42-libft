/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:34:15 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/06 11:08:43 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n <= 0)
		return (0);
	if (!(*s1) && !(*s2))
		return (0);
	if (*(unsigned char *) s1 > *(unsigned char *) s2)
		return (1);
	if (*(unsigned char *) s1 < *(unsigned char *) s2)
		return (-1);
	return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
/*
#include "stdio.h"

int	main(void)
{
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
}
*/
