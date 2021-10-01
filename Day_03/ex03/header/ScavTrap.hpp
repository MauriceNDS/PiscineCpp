/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 07:36:26 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 09:42:47 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public:
	
		ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & cpy );
        ~ScavTrap( void );

		void        attack( std::string const & target );
		void		guardGate( void ) const;
};

#endif