/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/12/07 19:33:49 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("    %d\n", stack->number);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int i;

	i = 0;
	stack_b = NULL;
	check_only_one_arg(++argv);
	if (argc < 2)
		exit(0);
	stack_a = build_stack(argv);
	check_duplicate_number(stack_a);
//	stack_b = ft_push(stack_a, stack_b);
//	ft_swap(&stack_a);
	ft_printf(" STACK A\n");
	print_stack(stack_a);	
	ft_stackclear(&stack_a, free);
	ft_printf(" STACK B\n");
	print_stack(stack_b);
}

