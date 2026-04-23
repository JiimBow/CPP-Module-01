/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:03:58 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 13:42:07 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(){};
	Zombie(const std::string name);
	~Zombie(void);

	void	announce(void);
	void	setName(const std::string &name);
};

Zombie	*zombieHorde(int N, std::string name);
