/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:21:53 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/25 11:56:43 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	count;

	count = 0;
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	if (min >= max)
		range = NULL;
	while (min < max)
	{
		range[count] = min;
		min++;
		count++;
	}
	return (range);
}
/*#include <stdio.h>
int main ()
{
	int *range = ft_range(5, -5);
	printf("%d", range[0]);
}*/
