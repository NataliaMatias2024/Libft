/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:25:28 by namatias          #+#    #+#             */
/*   Updated: 2025/08/03 13:25:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_size(int n)	
{
	size_t	size;
	long 	number;

	number = n;
	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number = number * -1;
		size++;
	}
	while (number > 0)
	{
		number = number/10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char 	    *ptr;
	long 	    number;
	size_t		size;

	size = ft_count_size(n);
	ptr = malloc ((size + 1 ) * sizeof(char));
	if (!ptr)
		return (NULL);
	number = n;	
	if (number == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	if (number < 0)
	{
		ptr[0] = '-';
		number = number * -1;
	}
	ptr[size] = '\0';
	while (number > 0)
	{
		--size;
		ptr[size] = (number % 10) + '0';
		number = number/10;
	}
	return (ptr);
}

// // --- FUNÇÃO AUXILIAR PARA EXECUTAR OS TESTES ---
// void run_test(int n, const char *expected) {
//     char *result = ft_itoa(n);
//
//     printf("Testando n = %d:\n", n);
//
//     if (result == NULL) {
//         printf("  -> FALHOU: ft_itoa retornou NULL\n");
//     } else if (strcmp(result, expected) == 0) {
//         printf("  -> PASSOU: \"%s\" (retorno) == \"%s\" (esperado)\n", result, expected);
//     } else {
//         printf("  -> FALHOU: ft_itoa retornou \"%s\", mas o esperado era \"%s\"\n", result, expected);
//     }
//    
//     // Libere a memória alocada pela sua função para evitar memory leaks
//     if (result != NULL) {
//         free(result);
//     }
//     printf("\n");
// }

// --- FUNÇÃO PRINCIPAL (MAIN) ---
// #include <stdio.h>   // Para printf
// #include <stdlib.h>  // Para free, malloc
// #include <limits.h>  // Para INT_MAX e INT_MIN
// int main() {
//     printf("--- Suite de Testes para ft_itoa ---\n\n");
//
//     // Testes de casos normais
//     run_test(0, "0");
//     run_test(123, "123");
//     run_test(-42, "-42");
//     run_test(5, "5");
//     run_test(-9, "-9");
//
//     // Testes de casos limites
//     run_test(INT_MAX, "2147483647");
//     run_test(INT_MIN, "-2147483648");
//
//     // Testes com números que terminam em 0
//     run_test(100, "100");
//     run_test(-200, "-200");
//
//     return 0;
// }