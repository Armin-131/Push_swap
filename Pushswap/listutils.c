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

node	*newnode(int value)
{
	node	*new;

	new = malloc(sizeof(node));
	if (!new)
		return(NULL);
	new->number = value;
	new->next = NULL;
	return (new);
}

void	*addback(node *whatevs, node **stack)
{
	node *last;
	
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