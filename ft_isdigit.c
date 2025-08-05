/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:44:22 by namatias          #+#    #+#             */
/*   Updated: 2025/07/24 18:44:46 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
//mesma coisa que if (c >= '0' && c <= '9')
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

// int	main()
// {
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('Z'));
// 	printf("%d\n", ft_isdigit('*'));
// 	return (0);
// }
