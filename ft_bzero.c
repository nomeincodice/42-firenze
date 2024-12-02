/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <fciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:54:53 by fciapett          #+#    #+#             */
/*   Updated: 2024/12/02 11:57:16 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_bzero(void *s, size_t n)
{
        unsigned char *p = (unsigned char *)s;
        while (n > 0)
        {
                *p = 0;
                p++;
                n--;
        }
        return (s);
}
/* int main()
{
    
    char buffer[10] = "Ciao123";
    printf("Prima: %s\n", buffer);
    

    ft_bzero(buffer, sizeof(buffer));
    printf("Dopo _bzero: %s\n", buffer);
    
    bzero(buffer, sizeof(buffer));
    printf("(Original function)Dopo bzero: %s\n", buffer);
    
    return 0;
} */
