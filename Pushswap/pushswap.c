/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:50:08 by abenaven          #+#    #+#             */
/*   Updated: 2025/02/17 20:50:14 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	char **sort;
	if(argc < 2)
	{
		return(1);
	}
	i = 1;
	while (i < argc)
	{
		
		sort = ft_split(argv[i], ' ');
		checkifchar(sort);
		
		free(sort);
		printf("%s\n",argv[i]);
		i++;
	}
	return(0);

}
