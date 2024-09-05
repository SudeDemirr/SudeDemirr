/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_is_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:11:15 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:11:40 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(13));
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	return 0;
}*/