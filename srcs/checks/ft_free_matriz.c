/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matriz.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:25:56 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 17:49:20 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_free_matriz(char ***matriz)
{
	int	i;

	i = 0;
	while (matriz[0][i])
	{
		free(matriz[0][i]);
		i++;
	}
	free(matriz[0]);
}
