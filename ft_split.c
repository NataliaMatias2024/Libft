/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:25:22 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:24:58 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	ft_lenght_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **ptr, int p)
{
	while (p >= 0)
	{
		free(ptr[p]);
		p--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	pos_s;
	int		pos_ptr;
	char	**ptr;

	ptr = malloc ((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ptr || !s)
		return (NULL);
	pos_s = 0;
	pos_ptr = 0;
	while (s[pos_s])
	{
		if (s[pos_s] != c)
		{
			ptr[pos_ptr] = ft_substr(s, pos_s, ft_lenght_words(&s[pos_s], c));
			if (!ptr[pos_ptr])
				return (ft_free(ptr, pos_ptr));
			pos_ptr++;
			pos_s = pos_s + ft_lenght_words(&s[pos_s], c);
		}
		else
			pos_s++;
	}
	ptr[pos_ptr] = NULL;
	return (ptr);
}

/*int main()
{
//Teste de count_words
    printf("5. Teste de count_words:\n");
    printf("   \"hello world\", ' ': %d (esperado 2)\n", count_words("hello world", ' '));
    printf("   \"  hello   world  \", ' ': %d (esperado 2)\n", count_words("  hello   world  ", ' '));
    printf("   \"one,two,three\", ',': %d (esperado 3)\n", count_words("one,two,three", ','));
    printf("   \"split\", ' ': %d (esperado 1)\n", count_words("split", ' '));
    printf("   \"\", ' ': %d (esperado 0)\n", count_words("", ' '));
    printf("   \"   \", ' ': %d (esperado 0)\n", count_words("   ", ' '));
    printf("\n");

//Teste de lenght_words
    printf("6. Teste de lenght_words:\n");
    printf("   \"hello world\", ' ': %d (esperado 5)\n", lenght_words("hello world", ' '));
    printf("   \"world  \", ' ': %d (esperado 5)\n", lenght_words("world  ", ' '));
    printf("   \"one,two\", ',': %d (esperado 3)\n", lenght_words("one,two", ','));
    printf("\n");

    printf("--- Testes de ft_split ---\n\n");
    char **result;

    printf("1. String: \"hello world\", Delimitador: ' '\n");
    result = ft_split("hello world", ' ');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n2. String: \"  hello   world  \", Delimitador: ' '\n");
    result = ft_split("  hello   world  ", ' ');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n3. String: \"one,two,three\", Delimitador: ','\n");
    result = ft_split("one,two,three", ',');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n4. String: \"split\", Delimitador: ' '\n");
    result = ft_split("split", ' ');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n5. String: \"\", Delimitador: ' '\n");
    result = ft_split("", ' ');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n6. String: \"   \", Delimitador: ' '\n");
    result = ft_split("   ", ' ');
    print_split_result(result);
    if (result) {
        for (int i = 0; result[i] != NULL; i++) free(result[i]);
        free(result);
    }

    printf("\n7. String: NULL, Delimitador: ' '\n");
    result = ft_split(NULL, ' '); // Teste para string NULL de entrada
    print_split_result(result);
    // Não precisa liberar se o resultado é NULL (já tratado por ft_split)

    return 0;
}*/