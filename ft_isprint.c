/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:04:13 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 03:04:41 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a > 31 && a < 127)
		return (1);
	else
		return (0);
}
//Fonksiyona geçirilen c parametre değerinin yazdırılabilir bir karakter 
//olup olmadığını kontrol eder. Eğer bir karakter alfabede bulunan bir
//harf, bir rakam, bir noktalama işareti veya bir noktalama karakteri 
//ise yazdırılabilir bir karakterdir.
