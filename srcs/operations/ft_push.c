/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:32:35 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 16:22:40 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_push(t_stack **stack_src, t_stack **stack_dest, char c)
{
	t_stack	*temp;

	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	temp->next = *stack_dest;
	*stack_dest = temp;
	if (c == 'a')
		ft_printf("pa\n");
	if (c == 'b')
		ft_printf("pb\n");
	return (*stack_dest);
}
