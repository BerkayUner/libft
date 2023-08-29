/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:02:42 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 04:02:44 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) + 1;
	while (i--)
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	return (NULL);
}

/*
int	main(void)
{
	char	a[] = "aktastaa";

	printf("%s", ft_strrchr(a, 't'));
}*/
//girilen karakteri dizi icinde arar.
//son gectigi yeri dondurur.
