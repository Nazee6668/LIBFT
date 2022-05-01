/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:37:17 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 09:21:44 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	let;
	int		i;

	let = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == let)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
