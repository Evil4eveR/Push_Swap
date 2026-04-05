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
