/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:07:57 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:08:10 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		sayi *= nb;
		nb--;
	}
	return (sayi);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(-3));
	printf("%d\n",ft_iterative_factorial(0));
	return 0;
}*/