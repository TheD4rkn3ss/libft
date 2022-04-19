/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:58 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/19 19:23:14 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*end;

	end = (unsigned char *)str;
	while (*end)
	{
		end++;
	}
	while (end != (unsigned char *)str)
	{
		if (*end == (unsigned char)c)
			return ((char *)end);
		end--;
	}
	if (*end == (unsigned char)c)
		return ((char *)end);
	return (NULL);
}
