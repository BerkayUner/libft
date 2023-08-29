/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:59:43 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 02:59:47 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int b)
{
	if (b > 47 && b < 58)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    char c = 'A';
    printf("%d", ft_isdigit(c));
}
*/

//Fonksiyona geçirilen c parametre değerinin bir rakam olup olmadığını
//kontrol eder. c: İşlem yapılacak karakter değeridir. Eğer karakter 
//bir rakam ise sıfır olmayan bir değer, aksi takdirde 0 değerini geri
//döndürür.
