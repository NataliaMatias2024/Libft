/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:25:28 by namatias          #+#    #+#             */
/*   Updated: 2025/08/03 13:25:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_size(int n)	
{
	int		size;
	long 	number;

	number = n;
	size = 0;
	if (number == 0)
		return(1);

	if (number < 0)
	{
		number = number * -1;
		size++;
	}
	while (number > 0)
	{
		number = number/10;
		size++;
	}
	return (size);
}


char	*ft_itoa(int n)
{
	char 	*ptr;
	long 	number;
	int 	i;
	int		size;

	size = ft_count_size(n);
	ptr = malloc ((size + 1 ) * sizeof(char));
	if (!ptr)
		return (NULL);
	number = n;	
	if (number == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	if (number < 0)
	{
		ptr[0] = '-';
		number = number * -1;
	}
	i = size - 1;
	ptr[i] = '\0'; 
	while (number > 0)
	{
		i--;
		ptr[i] = (number % 10) + '0';
		number = number/10;
	}
	return (ptr);
}
