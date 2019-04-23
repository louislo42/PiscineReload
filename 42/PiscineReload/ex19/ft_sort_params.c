/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louislor <louislor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:22:48 by louislor          #+#    #+#             */
/*   Updated: 2019/04/23 22:26:24 by louisloria       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


int main(int argc, char **argv)
{
  int	i;

  i = 1;
  if (ac > 1)
  {
    while (i < ac - 1)
    {
      if (ft_strcmp(av[i], av[i + 1]) > 0)
      {
        av[0] = av[i];
        av[i] = av[i + 1];
        av[i + 1] = av[0];
        i = 0;
      }
      i++;
    }
    i = 1;
    while (i < ac)
    {
      ft_putstr(av[i++]);
      ft_putchar('\n');
    }
  }
  return (0);
}
