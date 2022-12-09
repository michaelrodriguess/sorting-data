#include "../../includes/push_swap.h"

void ft_free_matriz(char ***matriz)
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
