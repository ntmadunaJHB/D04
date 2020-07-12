/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:57:45 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/12 16:57:53 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)

{
	if(nb > 0)
	{
		int holder;
		holder = 1;

		while(nb >= 1)
		{
			holder = holder * nb;
			nb--;
		}
		return(holder);
	}
	else
	{
		return(0);
	}
}
	

