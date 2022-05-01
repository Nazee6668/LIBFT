/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 07:00:06 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 04:48:18 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	let;
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	let = c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == let)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
