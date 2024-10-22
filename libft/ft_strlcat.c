/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:37:40 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 17:35:14 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int    src_len;
    unsigned int    dst_len;
    
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    
    if (dst_len >= dstsize)
        dst_len = dstsize;

    if (dst_len == dstsize)
        return (dstsize + src_len);

    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }

    return (dst_len + src_len);
}

// int main() {
//   char dest[50];
//   char src[50] = "Hello World!";
//   printf("%d\n", ft_strlcat(dest, src, 50));
//   return 0;
// }