/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:35:11 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:37:33 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		index = 0;
		while (argv[arg][index] != '\0')
		{
			write(1, &argv[arg][index], 1);
			index++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
