/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mount_index_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:19:39 by microdri          #+#    #+#             */
/*   Updated: 2022/12/15 19:42:24 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int *ft_ordenation_array(int *array_index, int len_array)
{
	int i;
	int j;
	int temp;

	i = 0;
	temp = 0;
	while (i < len_array - 1)
	{
		j = 0;
		while (j < len_array - 1)
		{
			if (array_index[j] > array_index[j + 1])
			{
				temp = array_index[j];
				array_index[j] = array_index[j + 1];
				array_index[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (array_index);
}

void	ft_add_index_stack(t_stack **stack, int *array_index, int len_array)
{
	int i;

	i = 0;
	while (*stack)
	{
		i = 0;
		while (i < len_array)
		{
			if ((*stack)->number == array_index[i])
				(*stack)->index = i;
			i++;
		}
		*stack = (*stack)->next;
	}
}

void	ft_mount_index_stack(t_stack **stack)
{
	t_stack *hold_stack;
	t_stack *temp;
	int len_array;
	int i;
	int *array_index;

	hold_stack = *stack;
	temp = *stack;
	i = 0;
	len_array = ft_stacksize(*stack);
	array_index = malloc(len_array * sizeof(int));
	while (*stack)
	{
		array_index[i] = (*stack)->number;
		i++;
		*stack = (*stack)->next;
	}
	array_index = ft_ordenation_array(array_index, len_array);
	ft_add_index_stack(&temp, array_index, len_array);
	*stack = hold_stack;
	free(array_index);
}

