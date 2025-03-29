/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:12:48 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/03 18:12:51 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_1, t_list **stack_2)
/*Pushes the first element of one stack to the first position of the other stack.
 If the stack where we move from is empty it does nothing.*/
{
	t_list		*temp;

	if (listsize(stack_2) == 0)
		return ;
	temp = *stack_1;
	*stack_1 = (*stack_1)->next;
	temp->next = *stack_2;
	*stack_2 = temp;
	return ;
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}
