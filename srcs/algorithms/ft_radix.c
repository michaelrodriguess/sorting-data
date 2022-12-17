/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:52:54 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 18:17:55 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_max_bit_comp(int size_bit)
{
	int	bit;

	bit = 32;
	while (bit > 0)
	{
		if (size_bit & (1 << bit))
			break ;
		bit--;
	}
	return (bit);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	bit;
	int	len;
	int	i;

	bit = 0;
	len = ft_stacksize(*stack_a);
	while (bit <= ft_max_bit_comp(len))
	{
		i = 0;
		while (i < len)
		{
			if ((*stack_a)->index & (1 << bit))
				ft_rotate(stack_a, 'a');
			else
				*stack_b = ft_push(stack_a, stack_b, 'b');
			i++;
		}
		while (*stack_b)
			*stack_a = ft_push(stack_b, stack_a, 'a');
		bit++;
	}
}
