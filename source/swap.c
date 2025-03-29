/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:55:51 by abenaven          #+#    #+#             */
/*   Updated: 2025/03/29 14:55:54 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
/*Swaps the first two elements of a stack only if
there is more than one element in that stack.*/
{
	int		temp;

	if (listsize(stack) < 1)
		return ;
	temp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = temp;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **stack_b)
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
