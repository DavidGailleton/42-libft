/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:07:51 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/09 17:34:56 by dgaillet         ###   ########lyon.fr   */
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
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' && ft_isdigit(nptr[i + 1]))
		return (-1 * ft_atoi(&nptr[i] + 1));
	else if (nptr[i] == '+' && ft_isdigit(nptr[i + 1]))
		i++;
	while (ft_isdigit(nptr[i]))
	{
		res = (10 * res) + nptr[i] - 48;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	}
}
*/
