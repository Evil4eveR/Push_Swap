/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ymarmoud <ymarmoud@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/04/03 16:43:14 by ymarmoud		  #+#	#+#			 */
/*   Updated: 2026/04/03 16:46:20 by ymarmoud		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

t_stack	*init_stack(void)
{
	t_stack *stck;
	stck = malloc(sizeof(t_stack));
	if(!stck)
		return NULL;
	stck->top = NULL;
	stck->end = NULL;
	stck->size = 0;
	return stck;
}

int ft_isvalid(const char *s)
{
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '+' || *s == '-')
        s++;
    if (!ft_isdigit(*s))
        return 0;
    while (ft_isdigit(*s))
        s++;
	return (1);
}
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	if(argc <= 1)
		return (0);
	a = init_stack();
	b = init_stack();
	int i = 1;
	while(i < argc)
	{
		printf("argv[%d] = %s\n", i,argv[i]);
		i++;
	}
	return (0);
}