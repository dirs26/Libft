/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:37:02 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 17:12:53 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int	ft_atoi(const char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memset(void *b, int c, unsigned int len);
size_t	ft_strlcpy(char *dest, const char *src);
size_t	ft_strlen(char *str);
int	ft_strncmp(const char *str1, const char *str2, unsigned int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memchr(const void *s, int c, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
int	ft_strnstr(const char *haystack, const char *needle, unsigned int len);
void	ft_bzero (void *s, int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putbnr_fd(int n, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char **ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

#endif // LIBFT_H