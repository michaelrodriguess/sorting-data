/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/01 15:07:07 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"
#include <stdio.h>

t_stack	*ft_stacknew(long number)
{
	t_stack *newnode;

	if (number < -2147483648 || number > 2147483647)
	{
		ft_putstr_fd("error\n", 2);
		exit(0);
	}
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

/*
void	ft_stackadd_front(t_stack **stack, t_stack *new_stack)
{
	if (!new_stack)
		return ;
	new_stack->next = stack[0];
	*stack = new_stack;
} */
