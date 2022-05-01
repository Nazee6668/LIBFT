/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:06:22 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/29 03:56:48 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	size_t		i;

	if (n == 0)
		i = 1;
	else if (n < 0)
	{
		i = 1;
		n = n * -1;
		while (n)
		{
			n = n / 10;
			i++;
		}
	}
	else
	{
		i = 0;
		while (n)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*ptr;
	int			ind;

	num = n;
	ind = ft_count(n) - 1;
	ptr = (char *)malloc((ft_count(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[ind + 1] = '\0';
	if (num < 0)
		num = num * -1;
	while (ind >= 0)
	{
		ptr[ind] = (num % 10) + 48;
		num = num / 10;
		ind--;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
