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

void		push(t_list **stack_1, t_list **stack_2) // Pushes the first element of one stack to the first position of the other stack. If the second is empty it does nothing.
{
	t_list	*temp;

	if(listsize(*stack_2) == 0)
		return;
	temp = *stack_1;
	*stack_1 = (*stack_1)->next;
	temp->next = *stack_2;
	*stack_2 = temp;
	return;
}
void	pa(t_list **stack_a, t_list *stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_("pa", 1);
}
void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
}

void	swap (t_list **stack) // Swaps the first two elements of a stack only if there is more than one element in that stack. 
{
	int		temp;

	if (listsize(**stack) < 1)
		return;
	temp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = temp;
}

void sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}
void	sb(t_list *stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}
void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
void	rotate(t_list **stack) // Moves all elements of the list up one position so the first becomes the last and the second the first.
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
void	revrot(t_list **stack) // Moves all elements of the list down one pos. so the last becomes the first.
{
	t_list	*head;
	t_list	*tail;
	t_list *prev;

	if(*stack == NULL || (*stack)->next == NULL)
		return;
	head = *stack;
	tail = head;
	prev = head;
	while (tail->next != NULL)
		tail = tail->next;
	while (prev->next != tail)
		prev = prev->next; // Here we have to find the second to last so we can turn that one into the last one. 
	*stack = tail;
	tail->next = head;
	prev->next = NULL;
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
