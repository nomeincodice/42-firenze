/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:07:33 by fciapett          #+#    #+#             */
/*   Updated: 2024/11/19 19:07:33 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* #include <stdio.h>
#include <ctype.h>
int main()
{
        int d = 127;
        printf("%d\n", ft_isprint(d));
        printf("%d\n", isprint(d));
        return (0);
} */
