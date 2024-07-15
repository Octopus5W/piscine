/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:55:04 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/22 12:11:04 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	while (argv[0][count] != '\0' && argc > 0)
		count++;
	write(1, argv[0], count);
	write(1, "\n", 1);
	return (0);
}
