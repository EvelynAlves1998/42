/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:54:23 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/12 22:13:10 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char		*p;
	int			i;

	p = str;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			i++;
		}
		else if (p[i] <= 'Z' && p[i] >= 'A')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}