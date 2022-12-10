/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:31:53 by microdri          #+#    #+#             */
/*   Updated: 2022/12/10 15:26:06 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_issorted(t_stack *stack)
{
	t_stack *temp;

	temp = NULL;
	while (stack->next != NULL)
	{
		temp = stack->next;
		if (temp->number > stack->number)
		{
			temp = temp->next;
			stack = stack->next;
		}
		else
			return(0);
	}
	return (1);
}

