/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:23:37 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/25 11:30:44 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min < max)
	{
		range[0] = malloc(sizeof(int) * max - min);
		if (!range[0])
			return (-1);
	}
	else
	{
		range[0] = NULL;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main() {
  int **range;
  int res = ft_ultimate_range(range, 8, 10);

   printf("%d", res);
  
  return 0;
}*/
