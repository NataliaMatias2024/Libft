<h1 align="center">
  <img alt="Libft" width="20%" height="20%" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/libfte.png" />
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
 git clone https://github.com/NataliaMatias2024/Libft.git
```
### 2. Para compilar, acesse a pasta do projeto e execute o comando make

```bash
 make
```
### 3. Para limpar todos os arquivos binários (.o) e o executável gerado (.a)

Deleta arquivos .o
```
 make clean
```
Deleta arquivos .o e o executável .a
```
 make fclean
```

### 4. Utilizando a Libft em seus projetos

Para usar essas funções e as que forem sendo adicionadas no futuro, inclua o header da lib no seu projeto dessa forma:
```
#include "libft.h"
```

E compile executando o MakeFile da biblioteca (libft)
```
 cc main.c -L. -lft -Wall -Wextra -Werror -o seu_programa
```

## 🧠 Lições Aprendidas e Dicas
Algumas dicas para quem está iniciando agora:

**Automação com Makefile:** O Makefile será seu melhor amigo em todo o Common Core. Entender o seu funcionamento e possibilidades agora poupará muito esforço em projetos complexos como o **Minishell** e o **Philosophers**. Embora a gente sempre "bata a cabeça" um pouco para ajustar os detalhes XD. Foque em tentar entender:
  - O funcionamento das variáveis automáticas (`$@`, `$<`)
  - A importância das flags de compilação (`CFLAGS`)
  - Como organizar a compilação de arquivos .c em subpastas (isso ajudará muito na organização de projetos complexos, que aqui ficou faltando rs).

**Gestão de Ponteiros:** A chave para evitar o Segmentation Fault é entender a diferença entre o endereço do ponteiro e o conteúdo apontado.

**RTFM (Read The F Manual):** O comando `man` é seu melhor amigo. As vezes o maior desafio é entender o que precisa ser desenvolvido, por isso descobrir o comportamento da libc original é 50% do desafio.
