/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:09:19 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/16 11:09:32 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;
	res = 1;

	if(power == 0)
	{
		return(1);
	}
   	if(power < 0)
	{
		return(0);
	}
	
	else
	{
		res = nb * ft_recursive_power( nb, power -1);
	}
	return res;
}
