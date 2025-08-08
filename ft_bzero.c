/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:31:13 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 16:45:09 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

//O cast (atribuir void *s para um unsigned char *), permite acessar byte a byte
	ptr = (unsigned char *)s;
//O numero maximo de bytes que iremos zerar é n 
//por isso ele será nosso criterio de parada.
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int main(void)
{
    char str[] = "Hello, world!";
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Antes de ft_bzero - CHAR: %s\n", str);
    printf("Antes de ft_bzero - INT:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Zerando os primeiros 5 bytes da string (ou seja, os 5 primeiros caracteres)
    ft_bzero(str, 5);
    ft_bzero(arr, 3 * sizeof(int));

    printf("Depois de ft_bzero: ");
    // Imprime byte a byte para mostrar zeros
    for (size_t i = 0; i < sizeof(str); i++)
    {
        if (str[i] == 0)
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}*/
