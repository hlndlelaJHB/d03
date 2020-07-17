/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlndlela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:52:47 by hlndlela          #+#    #+#             */
/*   Updated: 2020/07/17 12:09:05 by hlndlela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	 ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i]) {

		i+=1;
	
	}
		
 return i;
}

int main() 
{
	ft_strlen("Uyiyo nyani ingelosi");

	return 0;

}
