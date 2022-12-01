/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:35:54 by microdri          #+#    #+#             */
/*   Updated: 2022/12/01 19:10:52 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int segura;


	stack_a = *stack;
	stack_b = (*stack)->next;
	segura = stack_a->number;
	stack_a->number = stack_b->number;
	stack_b->number = segura;
	printf ("stack swaped a-> %d\n", stack_a->number);
	printf ("stack swaped b-> %d\n", stack_b->number);

}
