/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:20 by shahn             #+#    #+#             */
/*   Updated: 2022/03/31 02:29:40 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb > 1)
	{
		i = i * ft_recursive_factorial(nb - 1);
		return (i);
	}
	return (i * nb);
}
