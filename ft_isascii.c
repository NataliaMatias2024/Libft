/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:21:46 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:29:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}


// int main()
// {
// 	printf("%d\n", ft_isascii(' '));
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('Z'));
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii('9'));
// 	printf("%d\n", ft_isascii('*'));
// 	printf("%d\n", ft_isascii('{'));
// 	printf("%d\n", ft_isascii('º'));
// 	return (0);
// }