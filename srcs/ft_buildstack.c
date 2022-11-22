/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/11/22 19:29:18 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ps.h"
#include <stdio.h>

t_stack	*ft_stacknew(int number)
{
	t_stack *newnode;

	newnode = malloc(sizeof(t_stack));
	if (newnode == NULL)
		return (0);
	newnode->number = number;
	newnode->next = NULL;
	return (newnode);
}

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

void ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack *lastnode;
	
	if (!new)
		return ;
	if(*stack == NULL || !stack)
		*stack = new;
	else
	{
		lastnode = ft_stacklast(*stack);
		lastnode->next = new;
	}
}

