/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 17:57:44 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 17:58:39 by ymarmoud         ###   ########.fr       */
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
