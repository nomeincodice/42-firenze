/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <fciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:13:05 by fciapett          #+#    #+#             */
/*   Updated: 2024/12/02 10:54:03 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *dest, int size, int c, int len)
{
        unsigned char *ptr;
        unsigned char value;
        ptr = (unsigned char *) dest;
        value = (unsigned char) c;
        size = 0;

        while (len--)
        {
                *ptr = value;
                ptr++;
        }
        return (dest);
}
/* int main()
{
    char str[] = "Hello World";
    int size = 5;
    
    printf("Prima della funzione:\n");
    printf("Stringa: %s\n", str);
    
    
    ft_memset(str, size, '*', 5);
    printf("\nDopo memset sulla stringa:\n");
    printf("%s\n", str);

    memset(str, '*', 5);
    printf("\nDopo funzione originale memset sulla stringa:\n");
    printf("%s\n", str);
    
    return (0);
} */