/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:28:10 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 03:29:06 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && (char)c != *str)
		str++;
	if ((char)c == *str)
		return ((char *)str);
	return (0);
}
/*
 int	main(void)
{
	char	a[] = "akfdeeftastaa";

	printf("%s", ft_strchr(a, 't'));
} */
//girilen karakteri dizi icinde arar.
//ilk gectigi yeri dondurur.
