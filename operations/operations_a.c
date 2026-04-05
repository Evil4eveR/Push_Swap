/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:42:36 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 20:46:07 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size <= 1)
		return ;
	write(1, "sa\n", 3);
	tmp = a->top->val;
	a->top->val = a->top->next->val;
	a->top->next->val = tmp;
}

void	ra(t_stack *a)
{
	t_node	*mov;

	if (a->size <= 1)
		return ;
	write(1, "ra\n", 3);
	mov = a->top;
	a->top = a->top->next;
	mov->next = NULL;
	a->end->next = mov;
	a->end = mov;
}

void	rra(t_stack *a)
{
	t_node	*prev;

	if (a->size <= 1)
		return ;
	write(1, "rra\n", 4);
	prev = a->top;
	while (prev->next != a->end)
		prev = prev->next;
	a->end->next = a->top;
	a->top = a->end;
	a->end = prev;
	a->end->next = NULL;
}
