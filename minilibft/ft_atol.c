/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:18:16 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 17:46:55 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_limit(long n, int sig)
{
    if (sig == 1 && n > INT_MAX)
        ft_error();
    if (sig == -1 && -n < INT_MIN)
		ft_error();
}

long	ft_atol(char *s)
{
	long int	n;
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
		if (ft_isdigit((int) *s))
		{
			n = (n * 10) + (*s - '0');
			ft_check_limit(n, sig);
			s++;
		}
		else
			ft_error();
	}
	return (n * sig);
}
