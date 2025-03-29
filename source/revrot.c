/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:56:06 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/29 14:56:08 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrot(t_list **stack)
/*Moves all elements of the list down one pos. 
so the last becomes the first. We have to find the second to last so we can turn that
	 one into the last one.*/
{
	t_list		*head;
	t_list		*tail;
	t_list		*prev;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	head = *stack;
	tail = getlast(stack);
	prev = getprev2last(stack);
	tail->next = head;
	prev->next = NULL;
	*stack = tail;
}

void	rra(t_list **stack_a)
{
	revrot(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	revrot(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	revrot(stack_a);
	revrot(stack_b);
	ft_putendl_fd("rrr", 1);
}
