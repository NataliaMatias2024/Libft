/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:23:07 by namatias          #+#    #+#             */
/*   Updated: 2025/07/29 17:23:11 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	unsigned char	*ptr;

//Tratamento para parametros zerados e calculo de total size
	if (nmemb == 0 || size == 0)
		return (ptr = malloc(0));
	total = nmemb * size;
//TRatamento contra overflow
	if (total / size > nmemb)
		return (NULL);
//Alocamento de memoria em sí, usando malloc. 
	ptr = malloc (total);
	if (!ptr)
		return (NULL);
//Diferencial malloc vs. calloc é zerar os espaços alocados
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// //Quem chama o calloc é qm deve utilizar o free
// int main(void)
// {
//     int *arr;
//     size_t n = 5;
//     size_t i;
//
//     // Teste 1: alocar 5 ints
//     arr = ft_calloc(n, sizeof(int));
//     if (!arr)
//     {
//         printf("Falha na alocação\n");
//         return 1;
//     }
//
//     // Verificar se está zerado
//     printf("Teste 1: valores alocados (devem ser 0):\n");
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//
//     free(arr);
//
//     // Teste 2: alocar com nmemb = 0
//     arr = ft_calloc(0, sizeof(int));
//     printf("Teste 2: calloc(0, sizeof(int)) retornou ponteiro %p\n", (void *)arr);
//     free(arr); // sempre chame free, mesmo se o ponteiro for NULL
//
//     // Teste 3: alocar com size = 0
//     arr = ft_calloc(5, 0);
//     printf("Teste 3: calloc(5, 0) retornou ponteiro %p\n", (void *)arr);
//     free(arr);
//
//     return 0;
// }
