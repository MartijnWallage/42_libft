# LIBFT

Author: Martijn Wallage

Written in: ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## About

A library of common C functions used in the Core Curriculum of the 42 school.

## Overview

- ft_min(int a, int b): minimum of a and b (not part of the official project)
- ft_max(int a, int b): maximum of a and b (not part of the official project)
- ft_isalpha(int c) : is the value of c, understood as a char, a letter?
- ft_isdigit(int c) : is the value of c, understood as a char, a digit?
- ft_isalnum(int c) : is the value of c, understood as a char, an aphanumeric character?
- ft_isascii(int c) : is the value of c, understood as a char, on the ASCII chart?
- ft_isprint(int c) : is the value of c, understood as a char, a printable character?
- ft_toupper(int c) : convert c, understood as a char, to uppercase.
- ft_tolower(int c) : convert c, understood as a char, to lowercase.
-	ft_memset(void *s, int c, size_t n) : set memory to c. Memory address begins with s and ends with s + n.
- ft_bzero(void *s, size_t n) : set memory to 0. Memory address begins with s and ends with s + n.
-	ft_memcpy(void *dest, const void *src, size_t n) : copy n bytes of src to dest.
-	ft_memmove(void *dest, const void *src, size_t n) : move n bytes of src to dest.
- ft_memchr(const void *s, int c, size_t n) : return pointer to first occurrence of char c in s; otherwise, return NULL.
- ft_memcmp(const void *s1, const void *s2, size_t n) : compare s1 and s2, cast as char pointers.
- `ft_calloc(size_t nmemb, size_t size)` : allocate memory.
- `ft_freetab(void **tab)` : free double array (not part of the official project).
- `ft_tablen(void **tab)` : length of double array (not part of the official project).
- `ft_copytab(void **dest, void **src)` : copy source to destination (not part of the official project).
/* int str function */
int		ft_atoi(const char *nptr);
int		ft_atoi_base(const char *nptr, const char *base);
char	*ft_itoa(int n);
/* str functions */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*	some str finding functions */
int		ft_match(const char *big, const char *little, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_grep(char **tab, char *word);
/* put fd functions */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
/* list function */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* get_next_line */
char	*get_next_line(int fd);
int		ft_lastchar(char *line);
int		ft_linelen(char *s);
void	*free_strs(char **buffer, char *line);
void	update_buffer(char *buffer);
/*	ft_printf	*/
int		ft_printf(const char *format, ...);
