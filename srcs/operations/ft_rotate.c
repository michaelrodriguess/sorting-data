/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:24:14 by microdri          #+#    #+#             */
/*   Updated: 2022/12/13 18:00:18 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate(t_stack **stack, char c)
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
	if (c == 'a')
		ft_printf("ra\n");
	if (c == 'b')
		ft_printf("rb\n");
}
