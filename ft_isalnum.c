/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:05:37 by namatias          #+#    #+#             */
/*   Updated: 2025/07/24 19:06:12 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

// int	main()
// {
// 	printf("%d\n", ft_isalnum('*'));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('Z'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('\\'));
// 	return (0);
// }
