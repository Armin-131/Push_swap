/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort345.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:05:54 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/29 16:05:57 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_move_first3(t_list **stack_a, t_list **stack_b, t_list *smallest)
/*checks and in case the smallest 
value is within the firts 2 nodes it makes the required moves*/
{
	if (*stack_a == smallest)
		pb(stack_a, stack_b);
	else if ((*stack_a)->next == smallest)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next == smallest)
	{
		ra(stack_a);
		sa(stack_a);
	}
	return (true);
}

void	sort3(t_list **stack)
{
	t_list	*highest;

	if(!stack)
		return;
	if (issorted(stack))
		return ;
	highest = getbiggest(stack);
	if ((*stack) == highest)
		ra(stack);
	else if ((*stack)->next == highest)
		rra(stack);
	if ((*stack)->position > (*stack)->next->position)
		sa(stack);
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;

	if(!stack_a || !stack_b)
		return;
	if (issorted(stack_a))
		return ;
	smallest = getsmallest(stack_a);
	if (!check_move_first3(stack_a, stack_b, smallest))
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	sort3(stack_a);
	pa(stack_b, stack_a);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;
	t_list	*prevt;

	if(!stack_a || !stack_b)
		return;
	if (issorted(stack_a))
		return ;
	smallest = getsmallest(stack_a);
	prevt = getprev2last(stack_a);
	if (!check_move_first3(stack_a, stack_b, smallest))
	{
		if (prevt == smallest)
		{
			rra(stack_a);
			rra(stack_a);
		}
		else
			rra(stack_a);
		pb(stack_a, stack_b);
	}
	sort4(stack_a, stack_b);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
