/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 17:57:44 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 23:21:35 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_split(char **splt)
{
	char	**ptrsplt;

	ptrsplt = splt;
	while (*ptrsplt)
	{
		free(*ptrsplt);
		ptrsplt++;
	}
	free (splt);
}

int	ft_min(t_stack *a)
{
	t_node	*bn;
	int		mn;

	bn = a->top;
	mn = bn->val;
	while (bn)
	{
		if (mn > bn->val)
			mn = bn->val;
		bn = bn->next;
	}
	return (mn);
}
