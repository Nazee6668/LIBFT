/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:53:42 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 16:54:36 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	ind;

	dest = ft_strlen(dst);
	ind = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize - ft_strlen(dst) - 1 <= 0 || dstsize <= dest)
	{
		if (dstsize < dest)
			return ((ft_strlen(src) + dstsize));
		else
			return (ft_strlen(src) + dest);
	}
	else
	{
		while (src[ind] != '\0' && dstsize - dest - 1 > 0)
		{
			dst[dest] = src[ind];
			dest++;
			ind++;
		}
		dst[dest] = '\0';
	}
	return (ft_strlen(dst) - ind + ft_strlen(src));
}
