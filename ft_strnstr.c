/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:53:38 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:17:45 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	else
	{
		i = 0;
		j = 0;
		while (big[j] && j < len)
		{
			i = 0;
			while (little[i] == big[j + i] && j + i < len && big[j + i] != '\0')
				i++;
			if (little[i] == '\0')
				return ((char *)big + j);
			j++;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char big[] = "aaxx"; 
// 	char little[] = "xx";
// 	size_t len = 6;
// 	printf("%s\n", (char*)ft_strnstr(big, little, len));
// 	return (0);
// }