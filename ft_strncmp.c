/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:56:50 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 03:56:52 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] -(unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
 int	main(void)
{
	char a[] = "bilgisayar";
	char b[] = "bilgiler";

	printf("%d", ft_strncmp(a, b, 6));
}
*/
//iki stringi karsilastirir fark gordugunde char farkini return eder.
//mem hafızadaki değeri kontrol ediyo hepsi unsignedden ilerliyo
