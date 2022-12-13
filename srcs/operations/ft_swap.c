/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:35:54 by microdri          #+#    #+#             */
/*   Updated: 2022/12/13 18:53:08 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(t_stack **stack, char c)
{
	t_stack *hold_value;
	
	hold_value = *stack;
	*stack = (*stack)->next;
	hold_value->next = (*stack)->next;
	(*stack)->next = hold_value;	
	if (c == 'a')
		ft_printf("sa\n");
	if (c == 'b')
		ft_printf("sb\n");
}
