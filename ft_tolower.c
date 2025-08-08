/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:00:11 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 17:43:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
//Igual a if (c >= 'A' && c <= 'Z')
	if (c >= 65 && c <= 90)
//a diferença de uma letra maiuscula para a mesma letra minuscula é sempre + 32
//por isso se A for 65, a será 65 + 32 = 97. Essa regra vale para todas as letras
// de A a Z.
		return (c + 32);
	return (c);
}

// int main()
// {
// 	printf("%d\n", ft_tolower('A'));
// 	printf("%d\n", ft_tolower('a'));
// 	printf("%d\n", ft_tolower('Z'));
// 	printf("%d\n", ft_tolower('z'));
// 	printf("%d\n", ft_tolower('*'));
// 	printf("%d\n", ft_tolower('1'));
// 	printf("%d\n", ft_tolower('9'));
// 	return (0);
// }
