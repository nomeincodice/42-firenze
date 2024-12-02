/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:19:48 by fciapett          #+#    #+#             */
/*   Updated: 2024/11/18 12:19:50 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int     main()
{
                int d = 'f';
                printf("%d\n", ft_isalpha(d));
                printf("%d\n", isalpha(d));
                return (0);
} */
