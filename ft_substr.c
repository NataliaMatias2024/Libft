/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:49:11 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 18:00:58 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
//len será o tamanho da substring[start], o tamanho total de s precisa ser calculado

	size_t	i;
	size_t	len_s;
	char	*ptr;

//len_s irá guardar o tamanho total do nosso *s recebido, permitindo usa-lo para
//fazer criterios de parada e condicionais d forma a n pegar lixo d memoria ou pos invalida	
	len_s = ft_strlen(s);
	
//Caso s seja nulo nao iremos retornar nada, assim como para casos onde o 
//indice start for maior q o tamanho maximo de s.
//Ainda teriamos que fazer um malloc para esses casos especificos, por isso
//o uso da função ft_strdup facilia a vida, pois dentro deja já te o malloc
	if (s == NULL || start >= len_s)
		return (ft_strdup(""));

//Start nos diz onde a nova string começa (s[start])
//len nos diz ate onde a nova string vai (s[pos max final])
	i = 0;
	while (i < len && s[start + i] != '\0')
		i++;

//Agora temos o tamanho total que a nova string (ptr) terá 
//inda de s[start] até s[len].
	ptr = malloc ((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
//Com o espaço reservado finalmente conseguimos criar a nova string
//e retorna-la
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char *s1 = ft_substr("Hello, World!", 7, 5);     // Esperado: "World"
	char *s2 = ft_substr("Hello", 0, 2);             // Esperado: "He"
	char *s3 = ft_substr("Hello", 2, 10);            // Esperado: "llo"
	char *s4 = ft_substr("Hello", 5, 1);             // Esperado: ""
	char *s5 = ft_substr("Hello", 6, 1);             // Esperado: ""
	char *s6 = ft_substr(NULL, 0, 5);                // Esperado: ""
	char *s7 = ft_substr("Edge", 2, 0);              // Esperado: ""

	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n", s2);
	printf("s3: \"%s\"\n", s3);
	printf("s4: \"%s\"\n", s4);
	printf("s5: \"%s\"\n", s5);
	printf("s6: \"%s\"\n", s6);
	printf("s7: \"%s\"\n", s7);

	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
	free(s6);
	free(s7);

	return 0;
}*/