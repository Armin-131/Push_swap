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

void	addtostack(int number, t_list **stack);
void	checkrepeat(t_list **stack);

void	show_stacks(t_list **stack_a, t_list **stack_b)
{
	t_list	*node_a;
	t_list	*node_b;

	node_a = *stack_a;
	node_b = *stack_b;
	printf("╭───────╥───────╮\n│   a\t║   b\t│\n╞═══════╬═══════╡\n");
	while (node_a || node_b)
	{
		if (node_a)
		{
			printf("│ %i\t║", node_a->number);
			node_a = node_a->next;
		}
		else
			printf("│\t║");
		if (node_b)
		{
			printf(" %i\t│\n", node_b->number);
			node_b = node_b->next;
		}
		else
			printf("\t│\n");
	}
	printf("╰───────╨───────╯\n");
}

int main (int argc, char **argv)
{
	int i;
	char **sort;
	t_list *stack_a;
	t_list *stack_b;
	int j;

	stack_a = NULL;
	stack_b = NULL;
	if(argc < 2)
		return(0);
	i = 1;
	while (argv[i])
	{
		sort = ft_split(argv[i], ' ');
		j = 0;
		while(sort[j])
		{
			checking(sort[j]);
			addtostack(ft_atoi(sort[j]), &stack_a);
			j++;
		}	
		ft_freedom(sort);
		i++;
	}
	checkrepeat(&stack_a);
	show_stacks(&stack_a, &stack_b);

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
void	addtostack(int number, t_list **stack)
{
	t_list *add;

	add = newnode(number);
	addback (add, stack);
}
void	checkrepeat(t_list **stack)
{
	t_list *check1;
	t_list *check2;

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
