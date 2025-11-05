/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:07:51 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/05 19:17:34 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (!nptr[0])
		return (0);
	if (nptr[0] == '-' && ft_isdigit(nptr[1]))
		return (-1 * ft_atoi(nptr + 1));
	while (ft_isdigit(nptr[i++]))
		res = (10 * res) + (nptr[i] - '0');
	return (res);
}
