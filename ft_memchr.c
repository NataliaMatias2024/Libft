/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:34:18 by namatias          #+#    #+#             */
/*   Updated: 2025/07/30 18:35:11 by namatias         ###   ########.fr       */
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
