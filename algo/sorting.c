/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:03:18 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 21:44:51 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_stack *a)
{
	t_node	*tmp;

	tmp = a->top;
	while (tmp->next != NULL)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_3(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->val;
	mid = a->top->next->val;
	bot = a->end->val;
	if (top > mid && top > bot)
	{
		ra(a);
		if (!ft_is_sorted(a))
			sa(a);
	}
	else if (mid > top && mid > bot)
	{
		rra(a);
		if (!ft_is_sorted(a))
			sa(a);
	}
	else if (bot > top && !ft_is_sorted(a))
		sa(a);
}
