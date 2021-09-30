/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:55:36 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/30 08:30:58 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <cstddef>
#include <string>

class ClapTrap {
    
    private:
    
        std::string _name;
        size_t      _hp;
        size_t      _ep;
        size_t      _damage;
    
    public:

        ClapTrap( void );
        ClapTrap( std::string name, size_t dmg );
        ClapTrap( ClapTrap const & cpy );
        ~ClapTrap( void );

        ClapTrap&   operator=( ClapTrap const & rhs );

        void        attack( std::string const & target );
        void        takeDamage( unsigned int amount );
        void        beRepaired( unsigned int amount );
        
};

#endif