/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 17:52:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_build_stack(char **argv)
{
	t_stack	*stack_a;
	char	**mtrz;
	int		j;

	j = 0;
	stack_a = NULL;
	while (*argv)
	{	
		mtrz = ft_split(*argv, ' ');
		while (mtrz[j])
		{
			if (ft_atoi(mtrz[j]) < -2147483648 || ft_atoi(mtrz[j]) > 2147483647)
			{
				ft_free_matriz(&mtrz);
				ft_stackclear(&stack_a, free);
				ft_print_error();
			}
			ft_stackadd_back(&stack_a, ft_stacknew(ft_atoi(mtrz[j])));
			j++;
		}
		ft_free_matriz(&mtrz);
		j = 0;
		argv++;
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
