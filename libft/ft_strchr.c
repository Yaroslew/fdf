/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvarly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 14:39:19 by uvarly            #+#    #+#             */
/*   Updated: 2019/03/23 10:18:37 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*c_s;

	c_s = (char *)s;
	while (*c_s)
	{
		if (*c_s == c)
			return (c_s);
		c_s++;
	}
	if (*c_s == c)
		return (c_s);
	return (0);
}
