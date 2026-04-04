/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:42:36 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/04 12:09:01 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*mov;

	mov = b->top;
	b->top = mov->next;
	b->size--;
	if (b->size == 0)
		b->end = NULL;
	mov->next = a->top;
	a->top = mov;
	a->size++;
	if (a->size == 1)
		a->end = a->top;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*mov;

	mov = a->top;
	a->top = mov->next;
	a->size--;
	if (a->size == 0)
		a->top = NULL;
	if (a->size == 1)
		a->end = a->top;
	mov->next = b->top;
	b->top = mov;
	b->size++;
	if (b->size == 1)
		b->end = b->top;
}

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size <= 1)
		return ;
	tmp = a->top->val;
	a->top->val = a->top->next->val;
	a->top->next->val = tmp;
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size <= 1)
		return ;
	tmp = b->top->val;
	b->top->val = b->top->next->val;
	b->top->next->val = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	ra(t_stack *a)
{
	t_node	*mov;

	if (a->size <= 1)
		return ;
	mov = a->top;
	a->top = a->top->next;
	mov->next = NULL;
	a->end->next = mov;
	a->end = mov;
}

void	rb(t_stack *b)
{
	t_node	*mov;

	if (b->size <= 1)
		return ;
	mov = b->top;
	b->top = mov->next;
	mov->next = NULL;
	b->end->next = mov;
	b->end = mov;
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void	rra(t_stack *a)
{
	t_node	*prev;

	if (a->size <= 1)
		return ;
	prev = a->top;
	while (prev->next != a->end)
		prev = prev->next;
	a->end->next = a->top;
	a->top = a->end;
	a->end = prev;
	a->end->next = NULL;
}

void	rrb(t_stack *b)
{
	t_node	*prev;

	if (b->size <= 1)
		return ;
	prev = b->top;
	while (prev->next != b->end)
		prev = prev->next;
	b->end->next = b->top;
	b->top = b->end;
	b->end = prev;
	b->end->next = NULL;
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
