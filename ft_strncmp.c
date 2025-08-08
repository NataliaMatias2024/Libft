/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:58:10 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 19:18:08 by namatias         ###   ########.fr       */
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
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

//embora n seja obrigado unsigned deve ser usado em comparações
//binarias e de strings pois evita bugs com valores negativos
// int main()
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "abc\375xx";
// 	size_t n = 5;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// }
