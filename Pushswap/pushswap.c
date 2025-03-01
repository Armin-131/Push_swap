/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:50:08 by abenaven          #+#    #+#             */
/*   Updated: 2025/02/17 20:50:14 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	char **sort;
	node **stack_a;
	node **stack_b;
	int j;

	j = 0;
	stack_a = NULL;
	stack_b = NULL;
	if(argc < 2)
		return(1);
	i = 1;
	while (argv[i])
	{
		sort = ft_split(argv[i], ' ');
		while(sort[j])
		{
			checking(sort[j]);
			addtostack(ft_atoi(sort[j]), stack_a);
			j++;
		}	
		ft_freedom(sort);
		i++;
	}
	checkrepeat(stack_a);
	return(0);
}

void checking(char *n)
{
	int i;

	i  = 0;

	if(n[i] == '+' || n[i] == '-' || ft_isdigit(n[i]))
	{
		i++;
		while (ft_isdigit(n[i]) && n[i])
			i++;
		if(n[i] != '\0')
			exit(1);	
	}
	if ((ft_atol(n) < INT_MIN) || (ft_atol(n) > INT_MAX))
		exit(1);

}
void	addtostack(int number, node **stack)
{
	node *add;

	add = newnode(number);
	addback (add, stack);
}
void	checkrepeat(node **stack)
{
	node *check1;
	node *check2;

	check1 = *stack;
	check2 = NULL;

	while (check1 != NULL)
	{
		check2 = check1->next;
		while (check2 != NULL)
		{
			if (check1->number == check2->number)
				exit(1);
			check2 = check2->next;
		}
		check1 = check1->next;
	}
}