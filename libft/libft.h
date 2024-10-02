#ifndef LIBFT_H
# define LIBFT_H
int	atoi(const char *str);
int	ft_memset(void *b, int c, unsigned int len);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strcpy(char *dest, const char *src);
int	ft_strlen(char *str);
#endif // LIBFT_H