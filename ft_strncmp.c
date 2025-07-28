/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:58:10 by namatias          #+#    #+#             */
/*   Updated: 2025/07/27 15:58:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int	ft_strncmp(const char *s1, const char *s2, size_t n)
 {
	size_t	i;

 	i = 0;
 	if (n == 0)
 		return (0);
 	while (s1[i] && s2[i] && i < n)
 	{

 		if (s1[i] != s2[i])
 			return (s1[i] - s2[i]);
 		i++;
 	}
	if (i < n)
 		return (s1[i] - s2[i]); 
	return (0);
 }

/*int main()
{
	char s1[] = "est";
	char s2[] = "teste";
	size_t n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
}*/