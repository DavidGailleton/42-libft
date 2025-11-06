/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:24:37 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/06 12:38:20 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char) s[0] == (unsigned char) c)
		return ((char *) s);
	if (!s[0])
		return (0);
	return (ft_strchr(s + 1, c));
}
