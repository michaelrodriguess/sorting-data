/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:49 by microdri          #+#    #+#             */
/*   Updated: 2022/12/01 18:20:14 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <stdio.h>

typedef struct s_stack
{
	int number;
	struct s_stack *next;
}	t_stack;

t_stack	*ft_stacklast(t_stack *stack_a);
t_stack *ft_stacknew(long number);
void	ft_stackadd_back(t_stack **stack, t_stack *new_stack);
void	ft_stackadd_front(t_stack **stack, t_stack *new_stack);
void	check_isdigit(char **argv, int argc);
void	check_duplicate_number(t_stack *stack);
void	ft_swap(t_stack **stack);

#endif
