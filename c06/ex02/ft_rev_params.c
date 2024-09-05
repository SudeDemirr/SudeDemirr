/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suddemir <suddemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:33:07 by suddemir          #+#    #+#             */
/*   Updated: 2024/09/05 20:38:39 by suddemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	argc -= 1;
	while (argc > 0)
	{
		index = 0;
		while (argv[argc][index])
		{
			write(1, &argv[argc][index], 1);
			index++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
