/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:28:56 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 04:30:25 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s nin adresi d den kucuk oldugunda,
//overleap sorunu olmamasi icin sondan baslanir.
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dest);
	}
	else if (s > d)
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}

 int	main()
{
	char d[] = "yunus";
	char s[] = "talha";

	printf("%s", ft_memmove(d+2, d, 4));
} 

