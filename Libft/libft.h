#ifndef LIBFT_H
#define LIBFT_H

int	    ft_isalpha(int c);
int	    ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
int     ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	    ft_memcmp(void *s1, void *s2, unsigned int n);
char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *src);
int	    ft_toupper(int c);
int     ft_tolower(int c);
char	*ft_strchr();
char	*ft_strrchr();
void	*ft_memchr();
char	*ft_strnstr();
int	    ft_atoi();
char	*ft_calloc();
char	*ft_substr();
char	*ft_strjoin();
char	*ft_strtrim();
char	*ft_itoa();
char	*ft_strmapi();
void	ft_striteri();
void	ft_putchar_fd();
void	ft_putstr_fd();
void	ft_putendl_fd();
void	ft_putnbr_fd();
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif