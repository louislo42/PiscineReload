/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louislor <louislor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:24:15 by louislor          #+#    #+#             */
/*   Updated: 2019/04/10 15:25:30 by louisloria       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
