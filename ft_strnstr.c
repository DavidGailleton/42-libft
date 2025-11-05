/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:05:52 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 19:07:15 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	i = 0;
	little_len = ft_strlen(little);
	if (!little[0])
		return ((char *) big);
	while ((len - i) < little_len)
	{
		if (!ft_strncmp(&big[i], little, little_len))
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
