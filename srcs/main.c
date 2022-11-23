/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:33:03 by microdri          #+#    #+#             */
/*   Updated: 2022/11/23 20:35:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"
#include <stdio.h>

void print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("    %d\n", stack->number);
		stack = stack->next;
	}
}

#include <string.h>

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
//	char	*msg_error = "ALGO DE WRONG NAO ESTA RIGHT AI MANE!!!";
	int i;
	
	i = 1;
	stack_b = NULL;
	while (i >= 1 && i < argc)
	{	
		ft_stackadd_back(&stack_a ,ft_stacknew(ft_atoi(argv[i])));
		i++;
	}
	puts("Stack a");
	print_stack(stack_a);
	
}

