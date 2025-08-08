/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:47:36 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:29:41 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
//mesma coisa que if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

// int	main()
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('z'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d\n", ft_isalpha('Z'));
// 	printf("%d\n", ft_isalpha(' '));
// 	printf("%d\n", ft_isalpha('9'));
// 	printf("%d\n", ft_isalpha('1'));
// 	printf("%d\n", ft_isalpha('*'));
// 	return (0);
// }
