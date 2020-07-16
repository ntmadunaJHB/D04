/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:52:42 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/16 09:08:01 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
		if(power > 0)
		{
			int res;
			res = 1;
			while(power != 0)
			{
				res = res * nb;
			    power--;
			}
		    return(res);
	   }
		if( power == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
}
