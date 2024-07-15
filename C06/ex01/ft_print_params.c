/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:25:25 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/22 12:12:06 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count_argc;
	int	count_argv;

	count_argc = 1;
	while (count_argc < argc && argc > 0)
	{
		count_argv = 0;
		while (argv[count_argc][count_argv] != '\0')
			count_argv++;
		write(1, argv[count_argc], count_argv);
		write(1, "\n", 1);
		count_argc++;
	}
	return (0);
}
