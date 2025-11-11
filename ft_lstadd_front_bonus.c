/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaillet <dgaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:36:17 by dgaillet          #+#    #+#             */
/*   Updated: 2025/11/11 15:26:21 by dgaillet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	*ptr;
	t_list	*lst[1];

	ptr = ft_lstnew(NULL);
	lst[0] = NULL;
	ft_lstadd_front(lst, ptr);
	free(ptr);
}
