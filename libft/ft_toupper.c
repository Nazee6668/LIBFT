/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 07:06:03 by fnajimud          #+#    #+#             */
/*   Updated: 2022/04/27 11:43:07 by fnajimud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	a;

	a = c;
	if (!(a >= 'a' && a <= 'z'))
		return (a);
	else
		a = a - 32;
	return (a);
}
