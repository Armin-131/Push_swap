/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:33:15 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/29 18:33:18 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*getprev2last(t_list **stack)
{
	t_list	*tail;
	t_list	*prev;

	prev = *stack;
	tail = getlast(stack);
	while (prev->next != tail)
		prev = prev->next;
	return (prev);
}
