/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:34:45 by jodone            #+#    #+#             */
/*   Updated: 2026/04/23 18:07:34 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

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
				<< "I think I deserve to have some extra bacon for free."
				<< " I've been coming for years, whereas you started\n"
				<< "working here just last month.\n";
}

void	Harl::error()
{
	std::cout	<< "[ ERROR ]\n"
				<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::map<std::string, int> levels;
	levels["DEBUG"] = 1;
	levels["INFO"] = 2;
	levels["WARNING"] = 3;
	levels["ERROR"] = 4;
	
	switch (levels[level])
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
	default: std::cout << "Harl complains a lot, but that's incomprehensible\n";
		break;
	}
}
