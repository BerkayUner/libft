/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:35:28 by suner             #+#    #+#             */
/*   Updated: 2023/07/15 15:41:36 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//char olarak girilen diziyi inte cevirir.
int	ft_atoi(const char *str)
{
	long int	res;
	int			a;

	a = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			a *= -1;
		str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0') * a;
		if (res > 2147483647)
			return (-1);
		if (res < -2147483648)
			return (0);
		str++;
	}
	return (res);
}
/*
int	main(void)
{
	char	a[] = "12234";

	printf("%d", ft_atoi(a));
}
*/
