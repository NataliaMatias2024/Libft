/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:36:53 by namatias          #+#    #+#             */
/*   Updated: 2025/07/24 19:37:10 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}


// int main()
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('Z'));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint('9'));
// 	printf("%d\n", ft_isprint('*'));
// 	printf("%d\n", ft_isprint('{'));
// 	printf("%d\n", ft_isprint('\n'));
// 	return (0);
// }