/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:01:28 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/20 17:01:31 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*getsmallest(t_list **stack)
{
	t_list	*temp;
	t_list	*small;

	if (!*stack)
		return (NULL);
	temp = *stack;
	small = *stack;
	while (temp != NULL)
	{
		if (temp->number < small->number)
			small = temp;
		temp = temp->next;
	}
	return (small);
}

t_list	*getbiggest(t_list **stack)
{
	int		index;
	t_list	*temp;
	t_list	*biggest;

	if (*stack == NULL)
		return (NULL);
	temp = *stack;
	biggest = *stack;
	index = temp->position;
	while (temp != NULL)
	{
		if (temp->position > index)
		{
			index = temp->position;
			biggest = temp;
		}
		temp = temp->next;
	}
	return (biggest);
}

void	ft_indexing(t_list **stack)
{
	t_list	*small;
	t_list	*temp;
	int		index;

	index = 0;
	if


}

bool	issorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->number > temp->next->number)
			return (false);
		temp = temp->next;
	}
	return (true);
}
