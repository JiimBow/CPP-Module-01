/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:13:19 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 16:24:14 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::~HumanA()
{
}

std::string	HumanA::getName()
{
	return this->name;
}

void	HumanA::attack()
{
	std::cout	<< this->getName() << " attacks with their "
				<< this->weapon.getType() << std::endl;
}