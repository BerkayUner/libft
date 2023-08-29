/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:40:34 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 02:43:30 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	char	c;

	c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
*/
//Fonksiyona geçirilen c parametre değerinin alfabede bulunan bir 
//harf olup olmadığını kontrol eder.  işlem yapılacak karakter değeridir. 
//Eğer karakter alfabede yer alan bir harf 
//ise sıfır olmayan bir değer, aksi takdirde 0 değerini geri döndürür.
