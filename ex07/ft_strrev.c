/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlndlela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:11:09 by hlndlela          #+#    #+#             */
/*   Updated: 2020/07/17 12:28:05 by hlndlela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
char	*ft_strrev(char *str);
{
	int i;
	i = 0;

	while(str[i]) {
		ft_putchar(str[i]);
		i--;
	}

}	

int main(){
	ft_strrev("I am trying it on my own");

	return int;
}
