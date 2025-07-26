/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:53:38 by namatias          #+#    #+#             */
/*   Updated: 2025/07/26 14:54:48 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	if (len == 0)
		return ((char*)big);
	else
	{
		i = 0;
		j = 0;
		while (little[i] && big[j])
		{
			i = 0;
			while (little[i] == big[j])
			{
				if (little[i] == '\0')
					return ((char*)big + j);
				j++;
				i++;
			}
			j++;
		}
	}
	return (0);		
}

// int main()
// {
// 	char big[] = "c2 Ecole Sao Paulo"; 
// 	char little[] = "cole";
//
// 	char *result = ft_strnstr(big, little, 5);
//
// 	printf("%s\n", result);
//
// 	return (0);
// }