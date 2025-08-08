/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:23:07 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 17:41:23 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	unsigned char	*ptr;

//Tratamento para parametros zerados,deve retornar um ponteiro nao nulo
//assim garante que o free() nao de erro.
	if (nmemb == 0 || size == 0)
		return (ptr = malloc(0));
//Total sera o tamanho todal da informação que queremos alocar
	total = nmemb * size;
//Tratamento contra overflow, nesse caso nao iremos impedir que ele ocorra
//mas iremos identificar e encerrar o programa. Evitando sua propagação.
	if (total / size > nmemb)
		return (NULL);
//Alocamento de memoria em sí, usando malloc.
	ptr = malloc (total);
	if (!ptr)
		return (NULL);
//Diferencial malloc vs. calloc é zerar os espaços alocados, ou seja,
//precisamos zerar todo o *ptr, que é basicamente a função bzero!
	ft_bzero(ptr, total);
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
