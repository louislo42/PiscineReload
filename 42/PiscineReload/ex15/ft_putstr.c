/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louislor <louislor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:28:28 by louislor          #+#    #+#             */
/*   Updated: 2019/04/10 15:34:16 by louisloria       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
 {
   ft_putchar(str[i++]);
 }
}
