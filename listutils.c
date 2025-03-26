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

t_list	*newnode(int value) // creates  new node and returns a ponter to it
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return(NULL);
	new->number = value;
	new->next = NULL;
	new->position = -1;
	return (new);
}

void	addback(t_list *whatevs, t_list **stack) // adds a new node to the back of the list
{
	t_list *last;
	
	if(!stack || !whatevs)
		return;
	if (*stack == NULL)
	{
		*stack = whatevs;
		return;
	}
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	
	last->next = whatevs;
}

void	addfront(t_list **stack, t_list *whatevs) // adds a new node at the front of the list
{
	if(!stack || !whatevs)
		return;
	if (*stack == NULL)
	{
		*stack = whatevs;
		return;
	}
	whatevs->next = *stack;
	*stack = whatevs;
}
t_list	getlast(t_list **stack) //finds the last node of the list 
{
	t_list	*temp;

	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	return(*temp);
}

int		listsize(t_list **stack) // counts the number of elements in the list
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return(i);
}

void	ft_freelist(t_list	**stack)
{
	t_list	*head;
	t_list	*next;

	head = *stack;
	while(head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
}