/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/12/19 10:35:26 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	ft_select_sort(t_stack **stck_a, t_stack **stck_b, t_stack *stack_len)
{
	if (ft_stacksize(stack_len) == 2)
		ft_sort_two(stck_a);
	if (ft_stacksize(stack_len) == 3)
		ft_sort_three(stck_a);
	if (ft_stacksize(stack_len) == 4)
		ft_sort_four(stck_a, stck_b);
	if (ft_stacksize(stack_len) == 5)
		ft_sort_five(stck_a, stck_b);
	if (ft_stacksize(stack_len) > 5)
		ft_radix(stck_a, stck_b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*stack_len;

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
			ft_stackclear(&stack_a, free);
			exit(0);
		}
		ft_mount_index_stack(&stack_a);
		ft_select_sort(&stack_a, &stack_b, stack_len);
		ft_stackclear(&stack_a, &free);
	}
	exit(0);
}
