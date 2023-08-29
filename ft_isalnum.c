/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:45:56 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 02:46:16 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//sayi ve harf kontrolu.
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int	main(void)
{
	char	c;

	c = 'a';
	printf("%d", ft_isalnum(c));
}
*/
//Fonksiyona geçirilen c parametre değerinin alfabede bulunan bir harf 
//ve bir rakam olup olmadığını kontrol eder. c: İşlem yapılacak karakter 
//değeridir. Eğer karakter alfabede yer alan bir harf veya bir rakam  
//ise sıfır olmayan bir değer, aksi takdirde 0 değerini geri döndürür.
