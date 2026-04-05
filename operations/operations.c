/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:34:00 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 20:45:43 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*mov;

	write(1, "pa\n", 3);
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

	write(1, "pb\n", 3);
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

void	ss(t_stack *a, t_stack *b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}

void	rr(t_stack *a, t_stack *b)
{
	write(1, "rr\n", 3);
	ra(a);
	rb(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	write(1, "rrr\n", 4);
	rra(a);
	rrb(b);
}
