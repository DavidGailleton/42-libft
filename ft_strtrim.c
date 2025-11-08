/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:31:38 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/06 17:02:34 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_charset(char c, char const *set)
{
	if (!set[0])
		return (0);
	if (c == set[0])
		return (1);
	return (test_charset(c, set + 1));
}

int	end_trim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!s1[0])
		return (0);
	while (s1[i])
		i++;
	i--;
	while (test_charset(s1[i], set))
		i--;
	return (i);
}

int	start_trim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (test_charset(s1[i], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	i = 0;
	start = start_trim(s1, set);
	end = end_trim(s1, set);
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	while (start + i <= end)
	{
		str[i] = s1[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*test;

	test = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	printf("%s\n", test);
	free(test);
}
*/
