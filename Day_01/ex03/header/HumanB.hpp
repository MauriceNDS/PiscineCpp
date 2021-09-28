/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:54:33 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 11:43:11 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	private:
	
		std::string	_name;
		Weapon*		_weapon;

	public:

		HumanB( std::string name );

		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );

};