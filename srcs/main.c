/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/12/02 14:51:30 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("    %d\n", stack->number);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
//	t_stack *stack_b;
	int i;

	i = 1;
//	stack_b = NULL;	
	check_isdigit(argv, argc);
	while (i > 0 && i < argc)
	{	
		ft_stackadd_back(&stack_a ,ft_stacknew(ft_atoi(argv[i])));
		i++;
	}
	check_duplicate_number(stack_a);
	ft_swap(&stack_a);
	print_stack(stack_a);
}

