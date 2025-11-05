/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:26:10 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 19:29:48 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*all_mem;

	all_mem = malloc(size * nmemb);
	if (!all_mem)
		return (NULL);
	ft_bzero(all_mem, nmemb * size);
	return (all_mem);
}
