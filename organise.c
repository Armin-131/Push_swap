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

static t_list  *ft_getsmallest(t_list **stack)
{
	t_list	*small;
	t_list	*temp;
	int		minimum;

	small = NULL;
	temp = *stack;
	minimum = 0;
	if(!*stack)
		return (NULL);
	while (temp)
	{
		if(temp->position == -1 && (!minimum ||temp->number < small->number))
		{
			small = temp;
			minimum = 1;
		}
		temp = temp->next;
	}
	return (small);
}

void	ft_indexing(t_list **stack)
{
	t_list	*temp;
	int		inde;

	inde = 0;
	if (!stack || !*stack)
		return;
	temp = ft_getsmallest(stack);
	while (temp)
	{
		temp->position = inde;
		inde++;
		temp = ft_getsmallest(stack);
	}
}


// void	ft_indexing(t_list **stack)
// {
// 	t_list *temp;
// 	int index;
// 	index =0;
// 	if(!stack)
// 		exit(1);
// 	while ((*stack))
// 	{
// 		temp = ft_getsmallest(&stack);
// 		temp->position = index;
// 		index++;
// 		(*stack) = (*stack)->next;
// 	}
	
// }
