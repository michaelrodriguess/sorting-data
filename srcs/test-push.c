/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/11/22 19:31:13 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"
#include <stdio.h>

void print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->number);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	t_stack *head_list;
	while (i >= 1 && i < argc)
	{
		ft_stackadd_back(&head_list ,ft_stacknew(ft_atoi(argv[i])));
		i++;
	}
	print_stack(head_list);
}

