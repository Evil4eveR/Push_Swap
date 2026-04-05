/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:32:42 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 21:43:58 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size <= 1)
		return ;
	write(1, "sb\n", 3);
	tmp = b->top->val;
	b->top->val = b->top->next->val;
	b->top->next->val = tmp;
}

void	rb(t_stack *b)
{
	t_node	*mov;

	if (b->size <= 1)
		return ;
	write(1, "rb\n", 3);
	mov = b->top;
	b->top = mov->next;
	mov->next = NULL;
	b->end->next = mov;
	b->end = mov;
}

void	rrb(t_stack *b)
{
	t_node	*prev;

	if (b->size <= 1)
		return ;
	write(1, "rrb\n", 4);
	prev = b->top;
	while (prev->next != b->end)
		prev = prev->next;
	b->end->next = b->top;
	b->top = b->end;
	b->end = prev;
	b->end->next = NULL;
}
