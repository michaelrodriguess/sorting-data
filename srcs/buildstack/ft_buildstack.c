/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:43:04 by microdri          #+#    #+#             */
/*   Updated: 2022/12/10 15:26:32 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

t_stack *ft_build_stack(char **argv)
{
	t_stack *stack_a;
	char **matriz;
	int i;
	int	j;

	i = 0;
	j = 0;
	stack_a = NULL;
	while (argv[i])
	{	
		matriz = ft_split(argv[i], ' ');
		while (matriz[j])
		{	
			ft_stackadd_back(&stack_a, ft_stacknew(ft_atoi(matriz[j])));
			j++;
		}
		ft_free_matriz(&matriz);
		j = 0;
		i++;
	}
	return (stack_a);
}

