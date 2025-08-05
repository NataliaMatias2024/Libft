/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:55:33 by namatias          #+#    #+#             */
/*   Updated: 2025/07/25 11:55:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
//Igual a if (c >= 'a' && c <= 'z')
	if (c >= 97 && c <= 122)
//a diferença de uma letra minuscula para a mesma letra maiuscula é sempre -32
//por isso se a for 97, A será 97 - 32 = 65. Essa regra vale para todas as letras
// de A a Z. 
		return (c - 32);
	return (c);
}

// int main()
// {
// 	printf("%d\n", ft_toupper('A'));
// 	printf("%d\n", ft_toupper('a'));
// 	printf("%d\n", ft_toupper('z'));
// 	printf("%d\n", ft_toupper('Z'));
// 	printf("%d\n", ft_toupper('1'));
// 	printf("%d\n", ft_toupper('*'));
// 	printf("%d\n", ft_toupper('t'));
// 	return (0);
// }
