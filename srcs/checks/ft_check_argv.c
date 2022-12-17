/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:25:48 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 19:21:10 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_check_isdigit(char **matriz)
{
	int	i;
	int	j;

	i = 0;
	if (!*matriz)
		ft_print_error();
	while (matriz[i])
	{
		j = 0;
		if (matriz[i][0] == '-' || matriz[i][0] == '+')
			j++;
		while (matriz[i][j] != '\0')
		{
			if (!ft_isdigit(matriz[i][j]))
			{
				ft_free_matriz(&matriz);
				ft_print_error();
			}
			j++;
		}
		i++;
	}
}

void	ft_check_only_one_arg(char **argv)
{
	char	**matriz;
	int		i;

	i = 0;
	while (argv[i])
	{
		matriz = ft_split(argv[i], ' ');
		ft_check_isdigit(matriz);
		ft_free_matriz(&matriz);
		i++;
	}
}

void	ft_check_duplicate_number(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->number == temp->number)
			{
				ft_stackclear(&stack, free);
				ft_print_error();
			}
			temp = temp->next;
		}
		stack = stack->next;
	}
}
