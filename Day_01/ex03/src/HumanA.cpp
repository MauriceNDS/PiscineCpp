/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:55:12 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 11:03:36 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name( name ), _weapon( weapon ) {}

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}