/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:18:16 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 12:50:39 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_atol(char *s)
{
	long long	n;
	int			sig;

	n = 0;
	sig = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sig = -1;
		s++;
	}
	while (*s)
	{
		if(ft_isdigit((int)*s))
		{
			n = (n * 10) + (*s - '0');
			s++;
		}
		else
			ft_error();
	}
	return (n * sig);
}


