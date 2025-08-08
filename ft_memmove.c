/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:04:35 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:27:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*chardest;
	const unsigned char		*charsrc;

// Se dest e src forem NULL com n > 0, retorna NULL
// Se n == 0, retorna dest diretamente (nada a copiar)
	if (dest == NULL && src == NULL)
		return (NULL);
//Fazemos o cast para (char *) dos ponteiros voids recebidos
//Isso permite copiar byte a byte
	chardest = (unsigned char *)dest;
	charsrc = (const unsigned char *)src;
//AA diferença principal em relação ao memcpy é o suporte a overlap
//Quando dest > src, a cópia ocorre de trás para frente,
//evitando qsobrescrever dados da origem antes da leitura
	if (chardest > charsrc)
	{
		i = n;
		while (i > 0)
		{
			chardest[i - 1] = charsrc[i - 1];
			i--;
		}
	}
// Caso contrário (dest <= src), copiamos normalmente de frente pra trás.
	else
		ft_memcpy(chardest, temp, n);
	return (dest);
}

// int	main(void)
// {
// 	// Só para comparar resultados com memmove original
// 	#include <string.h> 

// 	char buffer1[20] = "1234567890";
// 	char buffer2[20] = "1234567890";
// 	char buffer3[20] = "1234567890";
// 	char buffer4[20] = "1234567890";

// 	// 1. Copiar bloco normal (sem overlap)
// 	ft_memmove(buffer1 + 5, buffer1, 5);
// 	printf("Teste 1 (sem overlap): %s\n", buffer1);
// 	// Esperado: "1234512345"

// 	// 2. Copiar com overlap (dest < src), cópia crescente
// 	ft_memmove(buffer2, buffer2 + 2, 5);
// 	printf("Teste 2 (overlap dest < src): %s\n", buffer2);
// 	// Esperado: "3456787890"

// 	// 3. Copiar com overlap (dest > src), cópia decrescente
// 	ft_memmove(buffer3 + 2, buffer3, 5);
// 	printf("Teste 3 (overlap dest > src): %s\n", buffer3);
// 	// Esperado: "1212345670"

// 	// 4. dest e src NULL com n != 0 (deve retornar NULL)
// 	if (ft_memmove(NULL, NULL, 5) == NULL)
// 		printf("Teste 4 (dest e src NULL, n!=0): passou\n");
// 	else
// 		printf("Teste 4 (dest e src NULL, n!=0): falhou\n");

// 	// 5. n == 0, não deve alterar nada
// 	strcpy(buffer4, "abcdef");
// 	ft_memmove(buffer4 + 2, buffer4, 0);
// 	printf("Teste 5 (n == 0): %s\n", buffer4);
// 	// Esperado: "abcdef"

// 	return 0;
// }
