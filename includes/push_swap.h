/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:49 by microdri          #+#    #+#             */
/*   Updated: 2022/12/19 10:34:30 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_stacklast(t_stack *stack);
t_stack	*ft_stacknew(long number);
t_stack	*ft_push(t_stack **stack_src, t_stack **stack_dest, char c);
t_stack	*ft_build_stack(char **argv);
int		ft_stacksize(t_stack *stack);
int		ft_issorted(t_stack *stack);
int		*ft_ordenation_array(int *array_index, int len_array);
int		get_posix_index(t_stack **stack, int index);
void	ft_stackadd_back(t_stack **stack, t_stack *newstack_node);
void	ft_stackadd_front(t_stack **stack, t_stack *newstack_node);
void	ft_check_isdigit(char **matriz);
void	ft_check_duplicate_number(t_stack *stack);
void	ft_check_only_one_arg(char **argv);
void	ft_print_error(void);
void	ft_swap(t_stack **stack, char c);
void	ft_free_matriz(char ***matriz);
void	ft_stackclear(t_stack **stack, void (*del)(void *));
void	ft_rotate(t_stack **stack, char c);
void	ft_reverse_rotate(t_stack **stack, char c);
void	ft_mount_index_stack(t_stack **stack);
void	ft_add_index_stack(t_stack **stack, int *array_index, int len_array);
void	ft_sort_three(t_stack **stack);
void	ft_sort_two(t_stack **stack);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_radix(t_stack **stack_a, t_stack **stack_b);
void	ft_select_sort(t_stack **a, t_stack **b, t_stack *stack_len);

#endif
