/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojilee <woojilee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:05:26 by woojilee          #+#    #+#             */
/*   Updated: 2023/02/14 21:15:24 by woojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	char	a[2];
	char	b[2];

	i = 0;
	j = 1;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			a[0] = (i / 10) + 48;
			a[1] = (i % 10) + 48;
			b[0] = (j / 10) + 48;
			b[1] = (j % 10) + 48;
			write(1, &a, 2);
			write(1, " ", 1);
			write(1, &b, 2);
			write(1, ",", 1);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/