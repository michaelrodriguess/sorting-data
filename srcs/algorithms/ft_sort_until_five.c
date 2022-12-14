/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_until_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:42:01 by microdri          #+#    #+#             */
/*   Updated: 2022/12/14 11:46:57 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sort_two(t_stack **stack)
{
	int first;
	int secund;

	first = (*stack)->index;
	secund = (*stack)->next->index;
	if (first > secund)
		ft_swap(stack, 'a');
}

void ft_sort_three(t_stack **stack)
{
	int first;
	int secund;
	int	last;
 
	first = (*stack)->index;
	secund = (*stack)->next->index;
	last = (*stack)->next->next->index;
	if (first > secund && first > last && secund > last)
	{
		ft_swap(stack, 'a');
		ft_reverse_rotate(stack, 'a');
	}
	else if (first > secund && first < last && secund < last)
		ft_swap(stack, 'a');
	else if (first > secund && first > last && secund < last)
		ft_rotate(stack, 'a');
	else if (first < secund && first > last && secund > last)
		ft_reverse_rotate(stack, 'a');
	else if (first < secund && first < last && secund > last)
	{
		ft_swap(stack, 'a');
		ft_rotate(stack, 'a');
	}
}

int get_posix_index(t_stack **stack, int index)
{
	int posix_index;
	t_stack *hold_value;

	hold_value = *stack;
	posix_index = 0;
	//index vai ser 0 ou 1, que é a representatividade do index do numero organizado!
	while (hold_value != NULL)
	{
		if (hold_value->index != index)
			posix_index++;
		hold_value = hold_value->next;
	}
	//com isso tenho a posicao que o index 0 ou 1 esta na stack!
	return (posix_index);
}

void ft_sort_four_five(t_stack **stack_a, t_stack **stack_b)
{
	int index_pushed;
	
	index_pushed = 0;
	while (ft_stacksize(*stack_a) > 3)
	{
		if ((*stack_a)->index == 0 && index_pushed == 0 )
		{
			*stack_b = ft_push(stack_a, stack_b, 'b');
			if (get_posix_index(stack_a, 0) <= 2)
			{
				puts("entro ra");
				ft_rotate(stack_a, 'a');
			}
			else if (get_posix_index(stack_a, 0) >= 3)
			{
				puts("entro rra");
	 			ft_reverse_rotate(stack_a, 'a');	
			}
			index_pushed++;
		}
		else if ((*stack_a)->index == 1 && index_pushed == 1) // a verificacao de stack_index for == 1 esta dando loop infinito
		{
			*stack_b = ft_push(stack_a, stack_b, 'b');
			if (get_posix_index(stack_a, 1) <= 2)
			{
				puts("entro ra");
				ft_rotate(stack_a, 'a');
			}
			else if (get_posix_index(stack_a, 1) >= 3)
			{
				puts("entro rra");
	 			ft_reverse_rotate(stack_a, 'a');	
			}
		}
//			ft_rotate(stack_a, 'a');
	}
	ft_sort_three(stack_a);
	while (*stack_b != NULL)
		*stack_a = ft_push(stack_b, stack_a, 'a');
}

