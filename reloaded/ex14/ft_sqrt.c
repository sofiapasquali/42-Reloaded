/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:43:20 by shahn             #+#    #+#             */
/*   Updated: 2022/03/23 19:43:52 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	chute;

	chute = 0;
	if (nb < 0)
		return (0);
	while (chute * chute <= nb && chute <= 46340)
	{
		if (chute * chute == nb)
			return (chute);
		chute++;
	}
	return (0);
}
