/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:00:38 by namatias          #+#    #+#             */
/*   Updated: 2025/07/29 19:00:52 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*chardest;
	const unsigned char	*charsrc;

//Tratamento para ponteiros nulos, a memcpy n é definida para esses casos
//oq pode causar crash	
	if (dest == NULL && src == NULL)
		return (NULL);
//Cast dos ponteiros recebidos para poder copiar byte por byte
	chardest = (unsigned char *)dest;
	charsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		chardest[i] = charsrc[i];
		i++;
	}
//Retorno da primeira posiçao do ponteiro dest recebido
	return (dest);
}

/*int main(void)
{
	// Teste 1: cópia de string
	char src1[] = "Testando";
	char dest1[20];

	ft_memcpy(dest1, src1, sizeof(src1)); // inclui o '\0'

	printf("Teste 1:\n");
	printf("src:  %s\n", src1);
	printf("dest: %s\n\n", dest1);

	// Teste 2: cópia parcial
	char src2[] = "ABCDEFG";
	char dest2[10] = {0};

	ft_memcpy(dest2, src2, 3); // só copia 'ABC'

	printf("Teste 2:\n");
	printf("src:  %s\n", src2);
	printf("dest: %.3s\n\n", dest2);

	// Teste 3: dest == NULL e src == NULL, n > 0 → deve retornar NULL
	printf("Teste 3:\n");
	void *result3 = ft_memcpy(NULL, NULL, 3);
	if (result3 == NULL)
		printf("Passou: memcpy(NULL, NULL, 3) retornou NULL\n\n");
	else
		printf("Erro: deveria retornar NULL\n\n");

	// Teste 4: dest == NULL e n == 0 → comportamento indefinido, mas não deve acessar ponteiros
	printf("Teste 4:\n");
	void *result4 = ft_memcpy(NULL, src1, 0);
	if (result4 == NULL)
		printf("Passou: memcpy(NULL, src, 0) retornou NULL (ou pode ser dest)\n\n");
	else
		printf("OK: comportamento indefinido aceito quando n == 0\n\n");

	// Teste 5: copiar int array
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {0};

	ft_memcpy(arr2, arr1, sizeof(arr1));

	printf("Teste 5:\n");
	printf("arr1: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	return 0;
}*/