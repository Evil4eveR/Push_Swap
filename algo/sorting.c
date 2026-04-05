/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soriting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:03:18 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 18:18:48 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_stack *a)
{
	t_node	*tmp;

	tmp = a->top;
	while (tmp->next != NULL)
	{
		if(tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
