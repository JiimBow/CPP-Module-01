/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:34:45 by jodone            #+#    #+#             */
/*   Updated: 2026/05/04 14:41:53 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout	<< "[ DEBUG ]\n"
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< " I really do!\n";
}

void	Harl::info()
{
	std::cout	<< "[ INFO ]\n"
				<< "I cannot believe adding extra bacon costs more money."
				<< " You didn't put enough bacon in my burger!\nIf you did,"
				<< " I wouldn't be asking for more!\n";
}

void	Harl::warning()
{
	std::cout	<< "[ WARNING ]\n"
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, whereas you started "
				<< "working here just last month.\n";
}

void	Harl::error()
{
	std::cout	<< "[ ERROR ]\n"
				<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	struct
	{
		std::string name;
		int			nb;
	}
	table[] =
	{
		{"DEBUG", 1},
		{"INFO", 2},
		{"WARNING", 3},
		{"ERROR", 4},
		{"DEFAULT", 5}
	};

	int	i = 0;
	for (i = 0; i < 4; i++)
	{
		if (table[i].name == level)
			break;
	}
	switch (table[i].nb)
	{
	case 1:
		this->debug();
		std::cout << std::endl;
	case 2:
		this->info();
		std::cout << std::endl;
	case 3:
		this->warning();
		std::cout << std::endl;
	case 4:
		this->error();
		break;
	default: std::cout << "Harl complains a lot, but that's incomprehensible" << std::endl;
		break;
	}
}
