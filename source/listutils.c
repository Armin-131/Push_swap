/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:23:38 by abenaven          #+#    #+#             */
/*   Updated: 2025/02/17 22:23:40 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*newnode(int value)
// creates  new node and returns a pointer to it
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->number = value;
	new->next = NULL;
	new->position = -1;
	return (new);
}

t_list	*getlast(t_list **stack)
// finds the last node of the list
{
	t_list		*temp;

	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

void	addback(t_list *whatevs, t_list **stack)
// adds a new node to the back of the list
{
	t_list		*last;

	if (!stack || !whatevs)
		return ;
	if (*stack == NULL)
	{
		*stack = whatevs;
		return ;
	}
	last = getlast(stack);
	last->next = whatevs;
}

void	ft_freelist(t_list **stack)
// frees list
{
	t_list		*head;
	t_list		*next;

	head = *stack;
	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
}

int	listsize(t_list **stack)
// counts the number of elements in the list
{
	int			i;
	t_list		*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
