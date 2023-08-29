/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:05:38 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 03:05:41 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
c karakterine disaridan alinan hangi fd isleminin yapilacagini belirleme
0 = standart input
1 = standart output
2 = standart error
*/
/*
int main()
{
	char c = 'm';
	int fd = open("test", O_WRONLY);
	ft_putchar_fd(c, fd);
}*/
//file descriptor.
