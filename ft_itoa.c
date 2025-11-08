/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:06:35 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/07 13:52:20 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	malloc_size(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	insert_char(char *str, unsigned int nbr, int index)
{
	if (!index)
		return ;
	str[index] = (nbr % 10) + '0';
	insert_char(str, nbr / 10, index - 1);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;

	nbr = n;
	if (n < 0)
		nbr = n * -1;
	str = malloc(sizeof(char) * (malloc_size(n) + 1));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	else
	{
		if (n < 0)
		{
			str[0] = '-';
		}
		insert_char(str, nbr, malloc_size(n) - 1);
	}
	str[malloc_size(n)] = '\0';
	return (str);
}

#include "stdio.h"

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = ft_itoa(atoi(argv[1]));
		printf("%s\n", str);
		free(str);
	}
}
