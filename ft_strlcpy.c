/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:34:20 by namatias          #+#    #+#             */
/*   Updated: 2025/07/25 15:34:44 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (n > 0)
	{
		i = 0;
		while (i < n - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int main()
{
	//char src[] = "Essa e a origem da maldade";
	char src[] = "Essa e a hora";
	char dst[] = "";
	size_t n = 0;

	printf("String dst antes da ft_strlcpy:\n%s\n", dst);
	printf("O n copiado foi de: %lu\n", ft_strlcpy(dst, src, n));
	printf("String dst depois da ft_strlcpy:\n%s\n", dst);

	return (0);
}*/