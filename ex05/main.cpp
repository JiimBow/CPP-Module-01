/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:34:37 by jodone            #+#    #+#             */
/*   Updated: 2026/04/23 15:01:07 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char** av)
{
	if (ac == 1)
	{
		std::cout << "You need to give one argument to Harl, he has to COMPLAIN !\n";
		return 1;
	}
	if (ac > 2)
	{
		std::cout << "Harl got too much argument for complain\n";
		return 1;
	}

	Harl harlington;
	std::string	level = av[1];
	
	harlington.complain(level);
}
