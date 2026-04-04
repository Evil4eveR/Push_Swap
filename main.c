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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isvalid(char *s)
{
// 	char *max_int = "2147483647";
// 	char *min_int = "-2147483648";

	int sign;
	sign = 1;
	if(!*s)
			return 0;
	while(*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if(*s == '+' || *s == '-') 
	{
		if(*s == '+')
			s++;
		else
		{
			sign = -1;
			s++;
		}
	}
	if(*s)
	{
		while(*s)
		{
			if(!ft_isdigit(*s))
				return 0;
			s++;			
		}
	return (1);
	}
	else
		return 0;
}
int main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	else
	{
		if(argc == 2)
		{
			// here i have to check the second argument if the string is has integers or not and split them 
		}
		else
		{
			// here i have to check every argument if integer push to the stack if it is a string but integer i think i have to converted to integer and push but if a char return error
		}
	return (0);
}