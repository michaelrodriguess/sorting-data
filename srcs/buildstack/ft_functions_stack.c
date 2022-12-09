/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/07 19:32:25 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_stacknew(long n)
{
	t_stack	*newstack_node;

	if (n < -2147483648 || n > 2147483647)
		ft_print_error();
//	{
//		ft_putstr_fd("error\n", 2);
//		exit (0);	
//	}
	newstack_node = malloc(sizeof(t_stack));
	if (newstack_node == NULL)
		return (0);
	newstack_node->number = n;
	newstack_node->next = NULL;
//if (newstack_node->number < -2147483648 || newstack_node->number > 2147483647)
//{
//	ft_putstr_fd("error\n", 2);
//	exit (0);
//}

	return (newstack_node);
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

void ft_stackadd_back(t_stack **stack, t_stack *newstack_node)
{
	t_stack *laststack_node;
	
	if (!newstack_node)
		return ;
	if (*stack == NULL || !stack)
		*stack = newstack_node;
	else
	{
		laststack_node = ft_stacklast(*stack);
		laststack_node->next = newstack_node;
	}
}

void	ft_stackadd_front(t_stack **stack, t_stack *newstack_node)
{
	if (!newstack_node)
		return ;
	newstack_node->next = stack[0];
	*stack = newstack_node;
}

void	ft_stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*stack_node;

	while (*stack)
	{
		stack_node = (*stack)->next;
		del(*stack);
		*stack = stack_node;
	}
}
