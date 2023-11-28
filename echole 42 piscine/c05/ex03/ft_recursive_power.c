/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryagiz <iryagiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:13:48 by iryagiz           #+#    #+#             */
/*   Updated: 2023/09/18 18:28:25 by iryagiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power -1)));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (result);
}
