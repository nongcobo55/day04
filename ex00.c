/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongcobo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:09:13 by nongcobo          #+#    #+#             */
/*   Updated: 2020/07/16 11:32:27 by nongcobo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)

{
	if (nb>0)

{
	int result;
	result=1;
	while(nb>0)
{
	result = result * nb;
	nb--;
	}
	return(result);
}

  else
 { 	
	return 0;	
  }
}
 	int main()
{
	int a;
	a=ft_iterative_factorial(3);
	printf("%d",a);
	return 0;	
}

