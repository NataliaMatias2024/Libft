/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:35:23 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:19:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main()
// {
// 	char string[] = "Ai meu Odin"; //tem 11
// 	char string2[] = "Maaariana conta 1"; //tem 17
// 	char string3[] = "T3m 17 c4r4ct3re2"; //tem 17
// 	printf("%d\n", ft_strlen(string));
// 	printf("%d\n", ft_strlen(string2));
// 	printf("%d\n", ft_strlen(string3));
// 	return (0);
// }
