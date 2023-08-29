/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suner <suner@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:38:40 by suner             #+#    #+#             */
/*   Updated: 2023/07/13 03:38:42 by suner            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void process_char(unsigned int index, char *ch) {
    *ch = (*ch >= 'A' && *ch <= 'Z') ? (*ch - 'A' + 'a') : *ch;
}
//f fonksiyonunu stringin her karakterine uygular.
int main() {
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);
    
    ft_striteri(str, process_char);
    
    printf("Modified String: %s\n", str);
    
    return 0;
}*/