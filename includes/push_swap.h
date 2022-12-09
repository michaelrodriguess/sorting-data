/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:49 by microdri          #+#    #+#             */
/*   Updated: 2022/12/07 19:25:14 by microdri         ###   ########.fr       */
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

t_stack *ft_stacklast(t_stack *stack);
t_stack *ft_stacknew(long number);
t_stack	*ft_push(t_stack *stack_src, t_stack *stack_dest);
t_stack	*ft_build_stack(char **argv);
void	ft_stackadd_back(t_stack **stack, t_stack *newstack_node);
void	ft_stackadd_front(t_stack **stack, t_stack *newstack_node);
void	ft_check_isdigit(char **matriz);
void	ft_check_duplicate_number(t_stack *stack);
void	ft_check_only_one_arg(char **argv);
void	ft_print_error(void);
void	ft_swap(t_stack **stack);
void	ft_free_matriz(char ***matriz);
void	ft_stackclear(t_stack **stack, void (*del)(void *));

#endif
