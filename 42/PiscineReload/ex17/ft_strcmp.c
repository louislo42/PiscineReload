/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louislor <louislor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:55:39 by louislor          #+#    #+#             */
/*   Updated: 2019/04/10 16:03:18 by louisloria       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
  unsigned int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
  {
    if (s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }
  if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
    return (s1[i] - s2[i]);
  return (0);
  }
}
