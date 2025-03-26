/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:15:39 by abenaven          #+#    #+#             */
/*   Updated: 2025/02/17 21:15:43 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

typedef	struct	t_list
{
	int		number;
	int		position;
	struct 	t_list * next;
} t_list;

t_list	*newnode(int value);
void	addback(t_list *whatevs, t_list **stack);

void checking(char *n);
void	push(t_list **stack_1, t_list **stack_2);
void	swap (t_list **stack);
void	rotate(t_list **stack);
void	revrot(t_list **stack);
void	ft_indexing(t_list **stack);
void	ft_freelist(t_list	**stack);

#endif