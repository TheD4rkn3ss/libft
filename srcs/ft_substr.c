/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:47:05 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/19 19:23:19 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	max_chr(const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (*s && i < len)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;
	size_t	i;

	i = 0;
	j = (size_t)start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) > j)
		i = max_chr(&s[start], len);
	new = (char *)malloc((i + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s[start], i + 1);
	return (new);
}
