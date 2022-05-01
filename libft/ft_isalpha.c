/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 06:51:47 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/27 11:28:59 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	num;

	num = c;
	if ((num >= 'A' && num <= 'Z')
		|| (num >= 'a' && num <= 'z'))
		return (1);
	else
		return (0);
}
