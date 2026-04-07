/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:03:18 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/07 14:08:45 by ymarmoud         ###   ########.fr       */
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

void	sort_5(t_stack *a, t_stack *b)
{
	int		m;

	while (a->size > 3)
	{
		m = ft_min(a);
		while (a->top->val != m)
			ra(a);
		pb(a, b);
	}
	sort_3(a);
	while (b->size > 0)
		pa(a, b);
}

int	get_max_rank(t_stack *a)
{
	t_node	*nd;
	int		max;

	nd = a->top;
	max = nd->rank;
	while (nd)
	{
		if (nd->rank > max)
			max = nd->rank;
		nd = nd->next;
	}
	return (max);
}

void	radix_pass(t_stack *a, t_stack *b, int bit)
{
	int	size;
	int	i;

	size = a->size;
	i = 0;
	while (i < size)
	{
		if (((a->top->rank >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	while (b->size > 0)
		pa(a, b);
}
