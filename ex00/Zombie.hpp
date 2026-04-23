/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:03:58 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 11:25:04 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(const std::string zname);
	~Zombie(void);

	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
