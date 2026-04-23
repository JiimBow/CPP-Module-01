/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:12:52 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 16:14:42 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon(){};
	Weapon(const std::string& type) : type(type){};
	~Weapon();

	const std::string&	getType(void);
	void	setType(const std::string newType);
};

