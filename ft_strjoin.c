/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:43:59 by namatias          #+#    #+#             */
/*   Updated: 2025/08/01 18:43:06 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Primeiro passo é garantir que a memoria seja alocada corretamente
//mesmo quando um dos ponteiros da strings apontar para um valor NULL 
static int	protect(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	int		size;
//Caso s1 == NULL, retorne size 0,
//caso contrario calcule o tamanho correto com a função strlen
	if (!s1)
		size_s1 = 0;
	else
		size_s1 = ft_strlen(s1);
//Caso s2 == NULL, retorne size 0,
//caso contrario calcule o tamanho correto com a função strlen
	if (!s2)
		size_s2 = 0;
	else
		size_s2 = ft_strlen(s2);
//Realiza a soma para conseguir o tamanho total a ser alocao e retorna ele
	size = size_s1 + size_s2;
	return (size);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
//Se s1 E s2 forem nulos a função encerra retornando nulo
	if (!s1 && !s2)
		return (NULL);

	str = malloc ((protect(s1, s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
//Depois de resarva o espaço na memoria começa a contatenação propriamente dita
//o ponteiro criado str recebe o valor de s1, ambos partindo da posição 0
	i = 0;
	j = 0;
	if(s1)
		while (s1[i])
			str[j++] = s1[i++];
//O segundo looping copia a informação do s2 , partindo da posição inicial (i=0)
//porem str inicia da ultima posição do looping anterior por isso n zeramos j.
	i = 0;
	if(s2)
		while (s2[i])
			str[j++] = s2[i++];
//Ao final da concatenação temos que acrescentar o valor \0, 
//indicando o final da nova string e retornando ela pronta.
	str[j] = '\0';
	return (str);
}
