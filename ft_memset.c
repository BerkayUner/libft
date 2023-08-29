/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:31:36 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 04:32:34 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)str;
	while (i < n)
	{
		j[i] = c;
		i++;
	}
	str = j;
	return (str);
}
/*int	main(void)
{
	char a[] = "yunusemre";
	char b = 'z';

	printf("%s", ft_memset(a, b , 5));
}
*/
//s dizisini n kadar c ile doldurur. 1 byte üzerinde işlem yapıyo mem
