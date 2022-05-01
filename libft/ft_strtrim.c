/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:27:29 by fnajimud          #+#    #+#             */
/*   Updated: 2022/05/01 12:41:57 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *str, char c)
{
	int	i;
 
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;

	beg = 0;
	while (ft_count(set, s1[beg]))
		beg++;
	end = ft_strlen(s1);
	while (end > beg && ft_count(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, beg, (end-beg)));
}
