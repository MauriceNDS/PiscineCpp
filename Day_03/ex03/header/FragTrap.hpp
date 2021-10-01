/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:01:57 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 09:42:56 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
	
		FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & cpy );
        ~FragTrap( void );

		void        attack( std::string const & target );
		void		highFivesGuys( void ) const;
};

#endif