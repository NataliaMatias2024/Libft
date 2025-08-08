/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:10:19 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 18:55:30 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int f;
	char *strtrim;

//Verificar se s1 existe, caso s1 n exista retorna NULL
	if (!s1)
		return (NULL);

//Caso set n exista retorna o proprio s1
	if (!set)
		return (ft_strdup(s1));

	i = 0;
//Verificar se set existe em s1
//inicio pro fim para no primeiro carcter diferente
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;

//fim pro inicio para no primeiro caracter diferente
	f = ft_strlen(s1) - 1;
	while (f > i && ft_strchr((char *)set, s1[f]))
		f--;

//se set = s1 retorna uma string vazia e alocada malloc (strdup(""))
	if (i > f)
		return (ft_strdup(""));

//retorna uma sub string iniciada na primeira diferença inicio -> fim
//e finalizada na primeira diferença fim -> inicio
	strtrim = ft_substr(s1, i, (f - i + 1));
	return (strtrim);
}

/*int	main(void)
{
	char *result;

	// Caso 1: set remove caracteres do início e do fim
	result = ft_strtrim("+++hello world***", "+*");
	printf("Caso 1: '%s'\n", result);
	free(result);

	// Caso 2: string sem nenhum caractere de set
	result = ft_strtrim("hello", "xyz");
	printf("Caso 2: '%s'\n", result);
	free(result);

	// Caso 3: string toda composta por caracteres de set
	result = ft_strtrim("xxxxxx", "x");
	printf("Caso 3: '%s'\n", result);
	free(result);

	// Caso 4: string vazia
	result = ft_strtrim("", "abc");
	printf("Caso 4: '%s'\n", result);
	free(result);

	// Caso 5: set vazio
	result = ft_strtrim("  abc  ", "");
	printf("Caso 5: '%s'\n", result);
	free(result);

	// Caso 6: s1 é NULL
	result = ft_strtrim(NULL, "abc");
	printf("Caso 6: '%s'\n", result); // Deve ser (null)
	// não dá free em NULL

	// Caso 7: set é NULL
	result = ft_strtrim("abc", NULL);
	printf("Caso 7: '%s'\n", result);
	free(result);

	return (0);
}*/