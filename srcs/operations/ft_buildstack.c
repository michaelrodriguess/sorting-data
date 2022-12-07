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
#include <stdio.h>

t_stack	*ft_stacknew(long n)
{
	t_stack	*newstack;

	newstack = malloc(sizeof(t_stack));
	if (newstack == NULL)
		return (0);
	newstack->number = n;
	newstack->next = NULL;
	if (newstack->number < -2147483648 || newstack->number > 2147483647)
	{
		ft_putstr_fd("error\n", 2);
		exit (0);
	}

	return (newstack);
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
	if (*stack == NULL || !stack)
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

t_stack *build_stack(char **argv)
{
	t_stack *stack_a;
	char **matriz;
	int i;
	int	j;

	i = 0;
	j = 0;
	stack_a = NULL;
	while (argv[i])
	{	
		matriz = ft_split(argv[i], ' ');
		while (matriz[j])
		{	
			ft_stackadd_back(&stack_a, ft_stacknew(ft_atoi(matriz[j])));
			j++;
		}
		free_array(&matriz);
		j = 0;
		i++;
	}
	return (stack_a);
}

void	ft_stackclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*no;

	while (*lst)
	{
		no = (*lst)->next;
		del(*lst);
		*lst = no;
	}
}
