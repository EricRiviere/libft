#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
//Funciones:
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_atoi(const char *c);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *b, int c, size_t len);
int	ft_memcmp(const void *b1, const void *b2, size_t len);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t number, size_t size);
#endif
