/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:26:34 by namatias          #+#    #+#             */
/*   Updated: 2025/08/08 16:39:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int res;
	int signal;
//O ATOI le e trata as informações sempre na mesma ordem, caso algo mude
// ne ordem padrao a função se encerra e retorna 0
//A ordem é: analisa espaços, analisa sinais, ignora as letras
//finalmente converte os char digitos em int digitos.
	i = 0;
	res = 0;
	signal = 1;
//Verifica "espaços", ignorando todos até achar o primeiro sinal/numero
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
//Verifica se existe APENAS UM sinal e se ele é negativo ou positivos
//Se existirem mais de um sinal causará o encerramento do programa. 
//Por isso utilizamos um IF ao inves de WHILE
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
//Verifica se é um digito entre 0 e 9 e guarda ele em uma variável res
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
//Resultado * 10 faz andar uma posição na casa decimal. Como só conseguimos 
//escrever um unico caracter por vez a multiplicação permite andar as casas.
//Já nptr[i] - '0' transforma o valor ascii no numero propriamente dito, isso pq
// 0 = 48 em ascii, e a diferença dele pra qualquer outro numero é o proprio numero.
//EX: 9 em ascii é 57 e 0 é 48. -> 57 - 48 = 9. É uma gambiarra matemágica. 		
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
//Ao final do looping o res ja terá o int salvo nele e conseguirá realizar operações matemágicas
//o retorno sempre será o res * signal pois assim se tiver sinal negativo ja retorna o int com o sinal correto 	
	return (signal * res);
}

/*int main(void)
{
	const char *tests[] = {
		"12345",
		"   987",
		"-42",
		"+17",
		"  -00123abc",
		"++123",      // comportamento indefinido, mas vamos ver
		"--456",      // idem
		"  + 789",    // espaço após sinal, deve retornar 0
		"abc123",     // começa com letras, deve retornar 0
		"2147483647", // maior int positivo (32 bits)
		"-2147483648",// menor int negativo (32 bits)
		NULL
	};

	for (int i = 0; tests[i] != NULL; i++)
	{
		printf("ft_atoi(\"%s\") = %d\n", tests[i], ft_atoi(tests[i]));
	}

	return 0;
}*/