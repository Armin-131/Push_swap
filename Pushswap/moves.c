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

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if(*stack_b == NULL || *stack_a == NULL)
		return;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
}
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if(*stack_b == NULL || *stack_a == NULL)
		return;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp; 
}
void	sa(t_list **stack_a)
{
	int		temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;
	temp = (*stack_a)->number;
	(*stack_a)->number = (*stack_a)->next->number;
	(*stack_a)->next->number = temp;
}
void	sb(t_list **stack_b)
{
	int		temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return;
	temp = (*stack_b)->number;
	(*stack_b)->number = (*stack_b)->next->number;
	(*stack_b)->next->number = temp;
}
void	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	head = *stack;
	tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	*stack = head->next;
	head->next = NULL;
	tail->next  = head;	
}
void	revrot(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if(*stack == NULL || (*stack)->next == NULL)
		return;
	head = *stack;
	tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next
}