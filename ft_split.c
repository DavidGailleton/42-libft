/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:02:58 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/07 13:05:00 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strs_size(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if ((s[j] != c && j == 0) || (s[j] != c && s[j - 1] == c))
			i++;
		j++;
	}
	return (i);
}

int	next_match(char	*str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	strs = malloc(sizeof(char *) * (strs_size(s, c) + 1));
	if (!strs)
		return (free(strs), NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		if ((s[j] != c && j == 0) || (s[j] != c && s[j - 1] == c))
		{
			if (s[j] == c)
				j++;
			strs[i] = ft_substr(&s[j], 0, next_match((char *) &s[j], c));
			i++;
		}
		j++;
	}
	strs[i] = NULL;
	return (strs);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strs;
	int		i;

	strs = ft_split("awdawdawd", ' ');
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free (strs);
}
*/
