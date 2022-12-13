/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/12/13 15:59:27 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("    number: %d, index of stack->number: %d\n", stack->number, stack->index);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	t_stack *stack_len;

	stack_len = NULL;
	stack_b = NULL;
	if (argc >= 2)
	{
		ft_check_only_one_arg(++argv);
		stack_a = ft_build_stack(argv);
		ft_check_duplicate_number(stack_a);
		stack_len = stack_a;

		if (ft_issorted(stack_a) == 1)
		{
			ft_printf("Stack ja Ordenada\n");
			exit(0);
		}
		ft_mount_index_stack(&stack_a); // montar os index para fazer as possiveis ordenacoes!
		if (ft_stacksize(stack_len) == 2)
			ft_sort_two(&stack_a);
		if (ft_stacksize(stack_len) == 3)
			ft_sort_three(&stack_a);
		if (ft_stacksize(stack_len) == 5 || ft_stacksize(stack_len) == 4)
			ft_sort_four_five(&stack_a, &stack_b);

//		stack_b = ft_push(&stack_a, &stack_b, 'b'); // test push a to b function

		ft_printf(" STACK A\n");
		print_stack(stack_a);
		ft_printf(" STACK B\n");
		print_stack(stack_b);

		ft_stackclear(&stack_a, free); // free na stack_a depois de utiliza-la
		ft_stackclear(&stack_b, free); // free na stack_a depois de utiliza-la
	}
	exit(0);
}

