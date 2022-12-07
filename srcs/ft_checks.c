/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:46:25 by microdri          #+#    #+#             */
/*   Updated: 2022/12/07 19:24:48 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void check_isdigit(char **matriz)
{
	int i;
	int j;

	i = 0;
	if (!*matriz)
	{
		puts("error");
		exit(0);
	}
	while (matriz[i])
	{
		j = 0;
		if (matriz[i][0] == '-' || matriz[i][0] == '+')
			   j++;
		while (matriz[i][j] != '\0')
		{
			if (!ft_isdigit(matriz[i][j]))
			{
				puts("error");
				exit(0);
			}
			j++;
		}
		i++;
	}
}


void free_array(char ***matriz)
{
	int i;

	i = 0;
	while (matriz[0][i])
	{
		free(matriz[0][i]);
		i++;
	}
	free(matriz[0]);
}

void check_only_one_arg(char **argv)
{
	char	**matriz;
	int		i;

	i = 0;
	while (argv[i])
	{
		matriz = ft_split(argv[i], ' '); //criar funcao para dar free na matriz
		check_isdigit(matriz);
		free_array(&matriz);
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

