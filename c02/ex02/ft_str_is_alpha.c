/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:47:27 by hangkim           #+#    #+#             */
/*   Updated: 2020/07/08 21:07:17 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}