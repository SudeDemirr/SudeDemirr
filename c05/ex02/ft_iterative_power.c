/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:09:22 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:09:53 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	say;

	say = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		say *= nb;
		power--;
	}
	return (say);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(5,3));
	printf("%d\n",ft_iterative_power(2,3));
	return 0;
}*/
