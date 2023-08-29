/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:36:23 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 04:36:48 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
/*
int	main(void)
{
	char a[] = "yunusemre";

	printf("%s", ft_bzero(a, 4));
}*/
//s disini n kadar null doldurur.
