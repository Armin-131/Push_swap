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

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	int				number;
	int				position;
	struct t_list	*next;
}					t_list;
// lists
t_list				*newnode(int value);
t_list				*getlast(t_list **stack);
t_list				*getprev2last(t_list **stack);
void				addback(t_list *whatevs, t_list **stack);
void				ft_freelist(t_list **stack);
int					listsize(t_list **stack);
// parse & organise
void				checking(char *n);
void				checkrepeat(t_list **stack);
void				ft_indexing(t_list **stack);
t_list				*getbiggest(t_list **stack);
t_list				*getsmallest(t_list **stack);
// moves
void				push(t_list **stack_1, t_list **stack_2);
void				pa(t_list **stack_b, t_list **stack_a);
void				pb(t_list **stack_a, t_list **stack_b);
void				swap(t_list **stack);
void				sa(t_list **stack_a);
void				sb(t_list **stack_b);
void				ss(t_list **stack_a, t_list **stack_b);
void				rotate(t_list **stack);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_b, t_list **stack_a);
void				revrot(t_list **stack);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);
// sorting
void				sort3(t_list **stack);
void				sort4(t_list **stack_a, t_list **stack_b);
bool				issorted(t_list **stack);
#endif