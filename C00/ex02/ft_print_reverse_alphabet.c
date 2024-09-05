/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:18:07 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/04 21:37:43 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

voidft_print_reverse_alphaber(void)
{
    char    b = 'z';
    while (b >= 'a')
    {
        write(1,&b, 1);
        b--;
    }
}