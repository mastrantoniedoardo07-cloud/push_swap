*This project has been created as part of the 42 curriculum by emastran.*

# Libft - Your First C Library

## Description
The **Libft** project is the very first assignment in the 42 school curriculum. The goal of this project is to re-code a selection of standard C library (`libc`) functions, along with additional utility functions that will serve as the foundation for all future C projects at 42 (such as *get_next_line*, *ft_printf*, *minishell*, etc.).

By rewriting these functions, this project provides a deep, low-level understanding of memory allocation, string manipulation, pointer arithmetic, and data structures like linked lists.

---

## Library Overview

The library is compiled into a single static library file named `libft.a`. It consists of all the functions listed below, structured into three main categories:

### 1. Libc Functions
Re-implementations of standard C library functions, strictly adhering to their original behavior (`man` pages):
* `ft_bzero` - Writes zeroes to a byte string.
* `ft_isalnum` - Alphanumeric character test.
* `ft_isalpha` - Alphabetic character test.
* `ft_isascii` - Test for ASCII character.
* `ft_isdigit` - Decimal-digit character test.
* `ft_isprint` - Printing character test (space character inclusive).
* `ft_memchr` - Locate byte in byte string.
* `ft_memcpy` - Copy memory area.
* `ft_memmove` - Copy byte string with overlap handling.
* `ft_memset` - Write a byte to a byte string.
* `ft_strchr` - Locate character in string (first occurrence).
* `ft_strlcat` - Size-bounded string concatenation.
* `ft_strlcpy` - Size-bounded string copying.
* `ft_strlen` - Find length of string.
* `ft_strncmp` - Compare strings (size-bounded).
* `ft_strrchr` - Locate character in string (last occurrence).
* `ft_tolower` - Upper case to lower case conversion.
* `ft_toupper` - Lower case to upper case conversion.
* `ft_memcmp` - Compare byte string.
* `ft_strnstr` - Locate a substring in a string (size-bounded).
* `ft_atoi` - Convert ASCII string to integer.
* `ft_calloc` - Memory allocation with zero initialization.
* `ft_strdup` - Save a copy of a string (with malloc).

### 2. Additional Functions
Non-standard functions developed to perform complex string operations and file descriptor writes:
* `ft_substr` - Extracts a substring from a string.
* `ft_strjoin` - Concatenates two strings into a new memory allocation.
* `ft_strtrim` - Trims specific characters from the beginning and end of a string.
* `ft_split` - Splits a string into an array of substrings using a delimiter character.
* `ft_itoa` - Converts an integer into a string.
* `ft_strmapi` - Applies a function to each character of a string creating a new string.
* `ft_striteri` - Applies a function to each character of a string (in-place modifications).
* `ft_putchar_fd` - Outputs a character to a given file descriptor.
* `ft_putstr_fd` - Outputs a string to a given file descriptor.
* `ft_putendl_fd` - Outputs a string to a given file descriptor followed by a newline.
* `ft_putnbr_fd` - Outputs an integer to a given file descriptor.

### 3. list functions (Linked Lists)
Functions used to manipulate singly linked lists, utilizing the following structure:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

void    ft_lstadd_front(t_list **lst, t_list *new);
t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

### 4. Instructions on the commands of the makefile

Compilation
The project includes a Makefile configured with the mandatory flags (-Wall -Wextra -Werror).

To compile the mandatory functions into libft.a, run:

make

Cleaning Up
To remove all generated object (.o) files:

make clean

To clean and re-compile the entire library from scratch:

make re

Usage Example
To use this library in an external C project, include the header file in your code and link the .a library during compilation:

C

#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!\n", 1);
    return (0);
}

Compile your project by linking libft.a:

gcc -Wall -Wextra -Werror main.c -L. -lft -o program