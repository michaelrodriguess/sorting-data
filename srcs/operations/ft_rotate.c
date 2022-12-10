/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:24:14 by microdri          #+#    #+#             */
/*   Updated: 2022/12/10 17:02:01 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack *hold_value;
	t_stack *temp_stack;

	hold_value = *stack;
	temp_stack = *stack;
	*stack = (*stack)->next;
	while (temp_stack->next != NULL)
	{
		temp_stack = temp_stack->next;
	}
	temp_stack->next = hold_value;
	hold_value->next = NULL;
}
