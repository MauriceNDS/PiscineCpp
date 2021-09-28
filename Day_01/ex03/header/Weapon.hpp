/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:54:34 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 11:25:48 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
	
	private:
		std::string	_type;

	public:
		Weapon(std::string type);

		std::string const & getType( void ) const;
		void	setType( std::string type );

};