/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:32:35 by microdri          #+#    #+#             */
/*   Updated: 2022/12/03 15:02:26 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_push(t_stack *stack_src, t_stack *stack_dest)
{
	t_stack *temp;

	temp = stack_src;
	stack_dest = ft_stacknew(temp->number);
	return (stack_dest); 
}
