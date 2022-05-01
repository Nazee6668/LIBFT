/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:38:47 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 06:58:55 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0'
			&& s1[i] == s2[i] && i < n - 1)
		{
			i++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
