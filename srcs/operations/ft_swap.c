/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:35:54 by microdri          #+#    #+#             */
/*   Updated: 2022/12/10 15:29:56 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int hold_value;


	stack_a = *stack;
	stack_b = (*stack)->next;
	hold_value = stack_a->number;
	stack_a->number = stack_b->number;
	stack_b->number = hold_value;

}
