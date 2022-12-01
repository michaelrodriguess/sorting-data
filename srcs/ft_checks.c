/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:46:25 by microdri          #+#    #+#             */
/*   Updated: 2022/12/01 16:42:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void check_isdigit(char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			   j++;
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
			{
				puts("error");
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void check_duplicate_number(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->number == temp->number)
			{
				puts("error");
				exit(0);
			}
			temp = temp->next;
		}
		stack = stack->next;
	}
}
