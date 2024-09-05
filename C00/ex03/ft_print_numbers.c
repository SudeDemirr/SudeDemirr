/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:27:29 by suddemir          #+#    #+#             */
/*   Updated: 2024/08/20 19:48:42 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

voidft_print_numbers(void)
{
    char    number;
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
    write (1, "\n", 1)
    }
}
