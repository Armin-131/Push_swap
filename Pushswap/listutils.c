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
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return(NULL);
	new->number = value;
	new->next = NULL;
	return (new);
}

void	addback(t_list *whatevs, t_list **stack)
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