#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*dup;

	i = 0;
	while (s[i])
	{
		i++;
	}
	// +1 para o espaço '\0'
	size = i + 1;

	//usamos o looping para pegar o tamanho string q precisamos
	//alocar com o malloc (SEMPRE USAMOS O FREE NA MAIN)
	dup = malloc (size * sizeof(const char));
	if (!dup)
		return (NULL);

	//Esse looping é para realizar a copia/duplicata da string recebida
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int main()
{
	const char *s = "Continue a nadar, continua a nadar ...";
// Criar ponteiro para armazenar o retorno de funções que alocam memória
// garante que o free libere corretamente. Evitando memory leak
// (vazamento de memória), que ocorre quando se perde a referência da área alocada.

	char *copy = ft_strdup(s);

	printf("%s\n", copy);
	free(copy);
}*/