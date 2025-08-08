/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:42:45 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:25:40 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

//o cast no void *s permite acessar e mudar byte a byte
	ptr = (unsigned char *)s;
// a declaração de i = 0, nos ajuda a controlar o looping onde o
//criterio de parada será ate atingit o n bytes a ser substituido
	i = 0;
	while (i < n)
	{
// C é nosso valor recebido q substituira os bytes do array *s
// o cast unsigned char garante q independente do valor recebido
//ele caberá no array
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*int main(void)
{
    char str[20] = "Exemplo de memset";

    printf("Antes: %s\n", str);
    // Preenche os 7 primeiros bytes com 'X' (ASCII 88)
    ft_memset(str, 'X', 7);

    printf("Depois: %s\n", str);

    return 0;
}*/