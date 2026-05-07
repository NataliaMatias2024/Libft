<h1 align="center">
  <img alt="Libft" width="20%" height="20%" src="https://github.com/joaolive/joaolive/blob/3ccf0ce9fdd2128ba8ef72276dde6506a5bb2ce3/badges/libft_b.png" />
</h1>

# 📚 Libft - @42SP
**Score:** 100/100 ✅ (Sem bônus)

Este repositório contém a implementação da **Libft**, o primeiro projeto do currículo da [42 São Paulo](https://www.42sp.org.br/).

## 🚀 Objetivos

> - Reforçar os fundamentos da linguagem C
> - Implementar funções da libc a partir do zero
> - Desenvolver uma biblioteca reutilizável para projetos futuros
> - Praticar organização, norminette e documentação de código
> - Entender o **gerenciamento de memória**, a **manipulação de ponteiros** e a **estrutura de um Makefile**

## 🛠️ Tecnologias e Conceitos
<div align="left">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/Makefile-4EAA25?style=for-the-badge&logo=gnu-make&logoColor=white" alt="Makefile" />
</div>

> - **Gerenciamento de Memória:** Alocação dinâmica (`malloc`, `free`) e manipulação direta de bytes.
> - **Ponteiros:** Aritmética de ponteiros e manipulação de strings.
> - **Listas Encadeadas:** Implementação e manipulação de estruturas dinâmicas de dados.
> - **Static Library:** Criação de um arquivo `.a` para reutilização de código.

<!--
## 🛠️ Funcionalidades

A `libft` inclui implementações personalizadas de diversas funções, divididas nas seguintes categorias:

### Parte 1 - Funções da Libc
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
- `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

### Parte 2 - Funções adicionais
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bônus - Listas encadeadas
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
-->

## 📁 Estrutura do Projeto

```bash
.
├── libft.h         # Header principal da biblioteca
├── Makefile        # Script para compilação
├── *.c             # Implementações das funções
└── README.md       # Este arquivo
```

## 🚀 Como Utilizar

### 1. Clone o repositório

```bash
$ git clone [https://github.com/NataliaMatias2024/libft.git](https://github.com/NataliaMatias2024/libft.git)
```
### 2. Para compilar vá na pasta do projeto e de make

```bash
$ make
```
### 3. Para limpar todos os arquivos binários (.o) e o executável gerado (.a)

Deleta arquivos .o
```
$ make clean
```
Deleta arquivos .o e o executável .a
```
$ make fclean
```

### 4. Usando a libft no seus códigos

Para usar essas funções e as que forem sendo adicionados no futuro, inclua o header da lib no seu projeto dessa forma:
```
#include "libft.h"
```

E compile executando o MakeFile da biblioteca (libft)
```
$ gcc main.c -L. -lft -o seu_programa
```

## 🧠 Para Novos Cadets
Algumas dicas para o início:

- Entenda o Makefile: Usaremos ele para praticamente todo o Common Core, tendo que fazer pequenos ajustes de acordo com o projeto. Entender ele agora irá poupar tempo nos próximos projetos, embora a gente sempre bata um pouco a cabeça pra conseguir ajustar todos os detalhes XD (Obs: Tente entender o que são as variáveis automáticas ($@, $<) e as flags que usamos para compilar (CFLAGS)).

- Ponteiros para Ponteiros: Entender a diferença entre o endereço do ponteiro e o conteúdo para o qual ele aponta é a chave para não dar Segfault.

- Não esqueçam de usar man NOME_DA_FUNÇÃO para entender o que precisa ser desenvolvido, as vezes a dificuldade está em interpretar corretamente o comportamento da função e não a execução em si. 
