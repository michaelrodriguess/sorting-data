/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/03 15:03:28 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"
#include <stdio.h>



t_stack *ft_stacklast(t_stack *stack)
{
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void ft_stackadd_back(t_stack **stack, t_stack *new_stack)
{
	t_stack *lastnode;
	
	if (!new_stack)
		return ;
	if(*stack == NULL || !stack)
		*stack = new_stack;
	else
	{
		lastnode = ft_stacklast(*stack);
		lastnode->next = new_stack;
	}
}

void	ft_stackadd_front(t_stack **stack, t_stack *new_stack)
{
	if (!new_stack)
		return ;
	new_stack->next = stack[0];
	*stack = new_stack;
}

