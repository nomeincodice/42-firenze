/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:51:33 by fciapett          #+#    #+#             */
/*   Updated: 2024/11/19 18:51:35 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int main()
{
        int d = 127;
        printf("%d\n", ft_isascii(d));
        printf("%d\n", isascii(d));
        return (0);
} */
