/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:00:16 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 04:01:18 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s2 yi s1 de arar ve buldugunda devamini return eder.
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && i + j < n)
		{
			if (s2[j + 1] == '\0' && j == ft_strlen(s2) - 1)
				return (&((char *)s1)[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = "abcdefgh";
	char b[] = "abc";

	printf("%s", ft_strnstr(a, b, 4));
}
*/