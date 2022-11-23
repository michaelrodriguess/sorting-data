/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:49 by microdri          #+#    #+#             */
/*   Updated: 2022/11/23 19:55:12 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include "../ft_printf/ft_printf.h"
# include <stdlib.h>
# define MAX_INTEGER = 2147483647 
# define MIN_INTEGER = -2147483648

typedef struct s_stack
{
	int number;
	struct s_stack *next;
}	t_stack;

t_stack	*ft_stacklast(t_stack *stack_a);
t_stack *ft_stacknew(int number);
void	ft_stackadd_back(t_stack **stack, t_stack *new_stack);
void	ft_stackadd_front(t_stack **stack, t_stack *new_stack);

#endif
