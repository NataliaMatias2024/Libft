/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:36:53 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:29:30 by namatias         ###   ########.fr       */
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