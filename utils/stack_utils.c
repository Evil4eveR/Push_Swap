/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   stack_utils.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ymarmoud <ymarmoud@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/04/04 23:58:27 by ymarmoud		  #+#	#+#			 */
/*   Updated: 2026/04/05 00:25:34 by ymarmoud		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stck;

	stck = malloc(sizeof(t_stack));
	if (!stck)
		return (NULL);
	stck->top = NULL;
	stck->end = NULL;
	stck->size = 0;
	return (stck);
}

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

void	ft_is_dupl(t_stack *a, int val)
{
	t_node	*nod;

	nod = a->top;
	while (nod)
	{
		if (nod->val == val)
			ft_error();
		nod = nod->next;
	}
}

void	ft_push_node(t_stack *a, int val)
{
	t_node	*no;

	no = malloc(sizeof(t_node));
	if (!no)
		return ;
	no->val = val;
	no->next = NULL;
	if (a->size == 0)
	{
		a->top = no;
		a->end = no;
	}
	else
	{
		a->end->next = no;
		a->end = no;
	}
	a->size++;
}

void	ft_fill_stack(t_stack *a, char **argv)
{
	int		n;
	char	**buf;
	char	**args;

	while (*argv)
	{
		args = ft_split(*argv, ' ');
		buf = args;
		while (*buf)
		{
			n = ft_atol(*buf);
			ft_is_dupl(a, n);
			ft_push_node(a, n);
			buf++;
		}
		ft_free_split(args);
		argv++;
	}
}
