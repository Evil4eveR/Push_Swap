/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:37:24 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 12:53:39 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_node
{
	int				val;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*end;
	size_t	size;
}	t_stack;

void	ft_error(void);
t_stack	*init_stack(void);
void	ft_check_args(char **argv);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
long long	ft_atol(char *s);
int	ft_isdigit(int c);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);

#endif