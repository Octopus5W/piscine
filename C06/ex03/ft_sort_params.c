/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:45:33 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/22 12:08:53 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cpt;

	cpt = 0;
	while (s1[cpt] == s2[cpt] && s1[cpt] != '\0' && s2[cpt] != '\0')
	{
		cpt++;
	}
	return (s1[cpt] - s2[cpt]);
}

void	ft_print_argv(int argc, char *argv[])
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
}

int	main(int argc, char *argv[])
{
	int		count;
	int		cp_count;
	int		cmp;
	char	*temp;

	count = 1;
	while (count < argc)
	{
		cp_count = count + 1;
		while (cp_count < argc)
		{
			cmp = ft_strcmp(argv[count], argv[cp_count]);
			if (cmp > 0)
			{
				temp = argv[count];
				argv[count] = argv[cp_count];
				argv[cp_count] = temp;
			}
			cp_count++;
		}
		count++;
	}
	ft_print_argv(argc, argv);
	return (0);
}
