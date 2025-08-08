/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:34:18 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:28:42 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
// Fazer cast permite acessar byte a byte para comparação
	const unsigned char	*array;
// Converte c para unsigned char para comparação correta
	unsigned char		character;
	size_t				i;

	array = (const unsigned char *)s;
	character = c;
// Percorre todos os n bytes procurando pelo valor character	
	i = 0;
	while (i < n)
	{
// Compara o byte atual com o valor armazenado em character
		if (array[i] == character)
// Retorna ponteiro para o byte encontrado, convertido para void*
// ponteiro generico, por tanto "aceita" qualquer valor
			return ((void *) (array + i));
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	#include <string.h> // Para comparação com memchr
	#include <stdlib.h> // Para NULL

	const char str[] = "Hello, world!";
	const char c1 = 'o';
	const char c2 = 'z';
	const char c3 = '\0';

	// Teste 1: caractere presente
	void *res1 = ft_memchr(str, c1, strlen(str));
	printf("Teste 1: buscando '%c' em \"%s\"\n", c1, str);
	if (res1)
		printf("Encontrado em pos: %ld\n", (char *)res1 - str);
	else
		printf("Não encontrado\n");

	// Teste 2: caractere ausente
	void *res2 = ft_memchr(str, c2, strlen(str));
	printf("\nTeste 2: buscando '%c' em \"%s\"\n", c2, str);
	if (res2)
		printf("Encontrado em pos: %ld\n", (char *)res2 - str);
	else
		printf("Não encontrado\n");

	// Teste 3: caractere nulo (terminador)
	void *res3 = ft_memchr(str, c3, strlen(str) + 1);
	printf("\nTeste 3: buscando terminador nulo em \"%s\"\n", str);
	if (res3)
		printf("Encontrado em pos: %ld\n", (char *)res3 - str);
	else
		printf("Não encontrado\n");

	// Teste 4: buscar em zero bytes (deve retornar NULL)
	void *res4 = ft_memchr(str, c1, 0);
	printf("\nTeste 4: buscando '%c' com n=0 (deve ser NULL)\n", c1);
	if (res4)
		printf("Encontrado em pos: %ld\n", (char *)res4 - str);
	else
		printf("Não encontrado (NULL esperado)\n");

	return 0;
}*/
