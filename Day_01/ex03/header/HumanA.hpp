/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:54:31 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 11:03:33 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:

		std::string	_name;
		Weapon&		_weapon;

	public:

		HumanA( std::string name, Weapon& weapon );

		void	attack( void ) const;
	
};