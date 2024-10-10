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
int	ft_atoi(const char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memset(void *b, int c, unsigned int len);
unsigned int	ft_strlcpy(char *dest, const char *src);
int	ft_strlen(char *str);
int	ft_strncmp(const char *str1, const char *str2, unsigned int n);
int	ft_strchr(const char *str, int c);
int	ft_strrchr(const char *str, int c);
int	ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcpy(void *dst, const void *src, unsigned int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
int	ft_strnstr(const char *haystack, const char *needle, unsigned int len);
void	ft_bzero (void *s, int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
#endif // LIBFT_H