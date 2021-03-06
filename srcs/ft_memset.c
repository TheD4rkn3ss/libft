/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:07 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/19 19:22:18 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(char *ptr, int c, size_t n)
{
	while (n != 0)
	{
		ptr[n - 1] = (char) c;
		n--;
	}
	return (ptr);
}
