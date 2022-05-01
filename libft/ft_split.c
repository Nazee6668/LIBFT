/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:54:55 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 09:03:11 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arrlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static int	ft_wordcount(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c && str[i + 1] == c)
			|| (str[i] != c && str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static char	*ft_cpystr(char const *str, char c)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc((ft_arrlen(str, c) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != c && i < ft_arrlen(str, c))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	char	**arr;
	
	arr = (char **)malloc((ft_wordcount(str, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else if (*str != c)
		{
			arr[i] = ft_cpystr(str, c);
			i++;
			while (*str != c && *str != 0)
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
