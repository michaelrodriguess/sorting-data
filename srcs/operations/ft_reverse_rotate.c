/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:03:06 by microdri          #+#    #+#             */
/*   Updated: 2022/12/13 16:10:43 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_reverse_rotate(t_stack **stack, char c)
{
	t_stack *temp_value;
	t_stack *previous_value;
	
	temp_value = *stack; 
	while (temp_value->next != NULL)
	{
		previous_value = temp_value; 
		temp_value = temp_value->next;
	}
	previous_value->next = NULL;
	temp_value->next = *stack;
	*stack = temp_value;
	if (c == 'a')
		ft_printf("rra\n");
	if (c == 'b')
		ft_printf("rrb\n");
}
