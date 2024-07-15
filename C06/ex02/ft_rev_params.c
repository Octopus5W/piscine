/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:35:33 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/14 20:44:27 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count_argv;

	while (argc > 1)
	{
		argc--;
		count_argv = 0;
		while (argv[argc][count_argv] != '\0')
			count_argv++;
		write(1, argv[argc], count_argv);
		write(1, "\n", 1);
	}
	return (0);
}
