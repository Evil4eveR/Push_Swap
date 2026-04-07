/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:00:00 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/07 14:08:35 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	cmp_int(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

static int	find_rank(int *vals, int size, int val)
{
	int	i;

	i = 0;
	while (i < size && vals[i] != val)
		i++;
	return (i + 1);
}

static void	assign_ranks(t_stack *a)
{
	int		*vals;
	int		i;
	t_node	*nd;

	vals = malloc(sizeof(int) * a->size);
	if (!vals)
		return ;
	i = 0;
	nd = a->top;
	while (i < (int)a->size && nd)
	{
		vals[i++] = nd->val;
		nd = nd->next;
	}
	qsort(vals, a->size, sizeof(int), cmp_int);
	nd = a->top;
	while (nd)
	{
		nd->rank = find_rank(vals, (int)a->size, nd->val);
		nd = nd->next;
	}
	free(vals);
}

void	big_sort(t_stack *a, t_stack *b)
{
	int	max_rank;
	int	bits;
	int	bit;

	if (a->size <= 3)
		return (sort_3(a));
	assign_ranks(a);
	max_rank = get_max_rank(a);
	bits = 0;
	while ((1 << bits) <= max_rank)
		bits++;
	bit = 0;
	while (bit < bits)
	{
		radix_pass(a, b, bit);
		bit++;
	}
}
