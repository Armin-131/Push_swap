/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:56:27 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/29 14:56:29 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
/*Moves all elements of the list up one position
 so the first becomes the last and the second the first.*/
{
	t_list		*head;
	t_list		*tail;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	head = *stack;
	tail = getlast(stack);
	while (tail->next != NULL)
		tail = tail->next;
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **stack_b, t_list **stack_a)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
