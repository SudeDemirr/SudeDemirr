/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:10:11 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:12:29 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		sayi;

	sayi = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (sayi);
}
/*#include<stdio.h>
int main()
{
    printf("%d\n",ft_recursive_power(5,3));
    printf("%d\n",ft_recursive_power(0,3));
    return 0;
}*/