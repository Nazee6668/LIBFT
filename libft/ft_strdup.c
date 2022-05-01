/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:03:49 by fnajimud          #+#    #+#             */
/*   Updated: 2022/05/01 12:23:02 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr1;
	int		i;

	if (!s1)
		return (NULL);
	ptr1 = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr1[i] = s1[i];
		i++;
	}
	ptr1[i] = '\0';
	return ((char *)ptr1);
}
