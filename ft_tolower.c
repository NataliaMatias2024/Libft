/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:00:11 by namatias          #+#    #+#             */
/*   Updated: 2025/07/25 12:00:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
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
