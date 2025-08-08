/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:09:51 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:14:34 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	aux;

//Irá retornar ponteiro para primeira ocorrencia de C. 
	i = 0;
	aux = -1;
	while (1)
	{
//Verifica em qual posição o c ocorre pela primeira vez e salva em aux
		if (s[i] == (char)c)
			aux = i;

//Se chegar até o final SEM achar C antes, encerra o looping.
		if (s[i] == '\0')
			break ;
		i++;
	}

//Caso c seja o proprio fim, retorna toda string
	if (c == '\0')
		return ((char *)&s[i]);

//Caso ache C, auxiliar guarda o valor. Entao retornamos um ptr para o endereço d aux.
	else if (aux != -1)
		return ((char *)&s[aux]);
	return (NULL);
}

// int	main()
// {
// 	const char *s = "teste";
// 	int c = '\0';
// 	printf("%s\n", ft_strrchr(s, c));
// }