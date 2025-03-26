/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:37:12 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/20 14:37:18 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_list **stack)
{
	t_list	*head;
	t_list	*next;

	head = *stack;
	next = head->next;
	if(head->number > next->number)
		sa(stack);
}
void	sort3(t_list **stack)
{

}