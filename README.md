# LIBFT

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

Author: Martijn Wallage

## About

A library of common C functions used in the Core Curriculum of the 42 school.

## Overview

### Char checks and converts

- `int  ft_isalpha(int c)` : is c a letter?
- `int  ft_isdigit(int c)` : is c a digit?
- `int  ft_isalnum(int c)` : is c an alphanumeric character?
- `int  ft_isascii(int c)` : is c on the ASCII chart?
- `int  ft_isprint(int c)` : is c a printable character?
- `int  ft_toupper(int c)` : convert c to uppercase.
- `int  ft_tolower(int c)` : convert c to lowercase.

### Memory functions
 
- `void ft_memset(void *s, int c, size_t n)` : set chunk of memory to c. Memory address begins with s and ends with s + n.
- `void ft_bzero(void *s, size_t n)` : set chunk of memory to 0. Memory address begins with s and ends with s + n.
- `void ft_memcpy(void *dest, const void *src, size_t n)` : copy n bytes of src to dest.
- `void ft_memmove(void *dest, const void *src, size_t n)` : move n bytes of src to dest.
- `void*   ft_memchr(const void *s, int c, size_t n)` : return pointer to first occurrence of char c in s.
- `int  ft_memcmp(const void *s1, const void *s2, size_t n)` : compare s1 and s2, cast as char pointers.
- `void ft_calloc(size_t nmemb, size_t size)` : allocate memory.

### String functions
- `int  ft_atoi(const char *nptr)` : convert from string to int.
- `int  ft_atoi_base(const char *nptr, const char *base)` : convert from string in base to int (not part of official project).
- `char*    ft_itoa(int n)` : convert from int to string.
- `char*    ft_strchr(const char *s, int c)` : return pointer to first occurrence of c in s.
- `char*    ft_strrchr(const char *s, int c)` : return pointer to last occurrence of c in s.
- `int  ft_strncmp(const char *s1, const char *s2, size_t n)` : compare n chars of s1 and s2.
- `int  ft_strcmp(const char *s1, const char *s2)` : compare s1 and s2 (not part of official project).
- `size_t   ft_strlen(const char *s)` : length of string.
- `size_t   ft_strlcpy(char *dst, const char *src, size_t size)` : copy size chars of src to dst
- `size_t   ft_strlcat(char *dst, const char *src, size_t size)` : concatenate src to dst.
- `char*    ft_strdup(const char *s)` : duplicate string.
- `char*    ft_substr(char const *s, unsigned int start, size_t len)` : copy and return the substring of s that begins at start and ends at start + len.
- `char*    ft_strjoin(char const *s1, char const *s2)` : join s1 to s2.
- `char*    ft_strtrim(char const *s1, char const *set)` : trim the chars in set from s1.
- `char**   ft_split(char const *s, char c)` : split string s in as many words as are separated by c.
- `char*    ft_strmapi(char const *s, char (*f)(unsigned int, char))` : map f onto s.
- `void ft_striteri(char *s, void (*f)(unsigned int, char*))` : apply f to every char in s.

### Some string finding functions
- `int  ft_match(const char *big, const char *little, size_t len)` : find little in big.
- `char *ft_strnstr(const char *big, const char *little, size_t len)` : find little in big.
- `char *ft_grep(char **tab, char *word)` : like shell command`grep`, used in minishell.

### put fd functions
- `void ft_putchar_fd(char c, int fd)` : print c to fd.
- `void ft_putstr_fd(char *s, int fd)` : print s to fd.
- `void ft_putendl_fd(char *s, int fd)` : print s with newline to fd.
- `void ft_putnbr_fd(int n, int fd)` : print decimal int to fd.

### list function (bonus)
- `t_list   *ft_lstnew(void *content)` : make new node.
- `void ft_lstadd_front(t_list **lst, t_list *new)` : add node to front of list. 
- `int  ft_lstsize(t_list *lst)` : size of list
- `t_list   *ft_lstlast(t_list *lst)` : last node of list.
- `void ft_lstadd_back(t_list **lst, t_list *new)` : add node to back of list.
- `void ft_lstdelone(t_list *lst, void (*del)(void *))` : delete one node.
- `void ft_lstclear(t_list **lst, void (*del)(void *))` : clear list.
- `void ft_lstiter(t_list *lst, void (*f)(void *))` : apply f to every node in lst.
- `t_list   *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` : map f onto lst.

### Get_next_line (added to this library from project 42_get_next_line)

- `char*    get_next_line(int fd)` : get next line from file.
- `int  ft_lastchar(char *line)` : return last char in line.
- `int  ft_linelen(char *s)` : length of s until first `\0`.
- `void*    free_strs(char **buffer, char *line)` : free buffer and line.
- `void update_buffer(char *buffer)` : remove first line from buffer.

### Ft_printf (added to this library from project 42_printf

- `int  ft_printf(const char *format, ...)` : simplified version of prinf.

### Some additional functions that no-one asked for

- `void ft_freetab(void **tab)` : free double array.
- `int ft_tablen(void **tab)` : length of double array.
- `void ft_copytab(void **dest, void **src)` : copy source to destination.
- `int  ft_min(int a, int b)`: minimum of a and b.
- `int  ft_max(int a, int b)`: maximum of a and b.
