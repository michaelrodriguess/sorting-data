/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/16 19:28:05 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *ft_build_stack(char **argv)
{
	t_stack *stack_a;
	char **matriz;
	int i;
	int	j;
	int value_temp;

	i = 0;
	j = 0;
	stack_a = NULL;
	while (argv[i])
	{	
		matriz = ft_split(argv[i], ' ');	
		while (matriz[j])
		{
			value_temp = ft_atoi(matriz[j]);
			if (value_temp < -2147483648 || value_temp > 2147483647)
			{
				ft_free_matriz(&matriz);
				ft_print_error();
			}
			ft_stackadd_back(&stack_a, ft_stacknew(value_temp));
			j++;
		}
		ft_free_matriz(&matriz);
		j = 0;
		i++;
	}
	return (stack_a);
}

int	ft_stacksize(t_stack *stack)
{
	int	count;

	if (stack == NULL)
		return (0);
	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

