# 📚 Libft

Este repositório contém a implementação da **Libft**, a primeira biblioteca em C desenvolvida como parte do currículo da [42 São Paulo](https://www.42sp.org.br/). 
O objetivo do projeto é recriar diversas funções da biblioteca padrão da linguagem C, além de desenvolver novas funções utilitárias para manipulação de strings e memória.

## 🚀 Objetivos

- Reforçar os fundamentos da linguagem C.
- Implementar funções da libc a partir do zero.
- Desenvolver uma biblioteca reutilizável para projetos futuros.
- Praticar organização, norminette e documentação de código.

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

✅ Status

✔️ Projeto finalizado e aprovado na 42 SP.
