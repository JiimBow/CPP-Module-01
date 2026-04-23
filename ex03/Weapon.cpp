/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:13:00 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 16:14:32 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void)
{
	const std::string&	typeREF = type;
	
	return typeREF;
}

void	Weapon::setType(const std::string newType)
{
	this->type = newType;
}
