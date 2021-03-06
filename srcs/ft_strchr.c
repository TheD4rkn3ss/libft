/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:24 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/19 19:22:37 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char *ptr, int c)
{
	while (*ptr)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr++;
	}
	if (c == '\0' && *ptr == '\0')
		return ((char *)ptr);
	return (NULL);
}
