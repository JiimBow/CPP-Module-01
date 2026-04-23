/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:34:45 by jodone            #+#    #+#             */
/*   Updated: 2026/04/23 15:02:48 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout	<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< " I really do!\n";
}

void	Harl::info()
{
	std::cout	<< "I cannot believe adding extra bacon costs more money."
				<< " You didn't put enough bacon in my burger!\nIf you did,"
				<< " I wouldn't be asking for more!\n";
}

void	Harl::warning()
{
	std::cout	<< "I think I deserve to have some extra bacon for free."
				<< " I've been coming for years, whereas you started\n"
				<< "working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	typedef	void (Harl::*TableFunc)();
	
	struct 
	{
		std::string name;
		TableFunc FuncPtr;
	}
	table[] =
	{
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning",&Harl::warning},
		{"error", &Harl::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (table[i].name == level)
		{
			(this->*table[i].FuncPtr)();
			return ;
		}
	}
	
	std::cout << "Harl complains a lot, but that's incomprehensible\n";
}
