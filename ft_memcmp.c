/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:56:25 by namatias          #+#    #+#             */
/*   Updated: 2025/07/30 19:56:45 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>  // Para comparação com a função original

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t				i;
//Fazer o cast possibilita acessar os valores byte a byte
	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
//Essa linha é uma das regras da função original. Que diz que o retorno sera 0
//sempre que nosso n for 0. Ela n é necessária devido ao return 0
//na ultima linha, mas acredito que fique mais visual assim	
	if (n == 0)
		return (0);
//O looping começa em zero e permanece ate alcançar n, garantindo a comparação
//entre o numero de bytes pedidos OU até encontrar um byte diferente do outro
//durante as comparações	
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	// Teste 1: strings iguais
// 	char *a1 = "abcde";
// 	char *a2 = "abcde";
// 	printf("Teste 1: %d (esperado: 0)\n", ft_memcmp(a1, a2, 5));
//
// 	// Teste 2: diferença no meio
// 	char *b1 = "abcde";
// 	char *b2 = "abXde";
// 	printf("Teste 2: %d (esperado: %d)\n", ft_memcmp(b1, b2, 5), memcmp(b1, b2, 5));
//
// 	// Teste 3: diferença no fim
// 	char *c1 = "abcde";
// 	char *c2 = "abcdf";
// 	printf("Teste 3: %d (esperado: %d)\n", ft_memcmp(c1, c2, 5), memcmp(c1, c2, 5));
//
// 	// Teste 4: n == 0
// 	char *d1 = "abc";
// 	char *d2 = "xyz";
// 	printf("Teste 4: %d (esperado: 0)\n", ft_memcmp(d1, d2, 0));
//
// 	// Teste 5: comparação além do '\0'
// 	char *e1 = "abc\0def";
// 	char *e2 = "abc\0xyz";
// 	printf("Teste 5: %d (esperado: %d)\n", ft_memcmp(e1, e2, 7), memcmp(e1, e2, 7));
//
// 	return (0);
// }
