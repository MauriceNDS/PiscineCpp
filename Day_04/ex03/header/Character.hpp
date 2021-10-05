/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:14:59 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 09:52:22 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter {

	private:

		std::string	_name;
		AMateria*	_inventory[4];
		size_t		_size;

	public:

		Character( void );
		Character( std::string const & name );
		Character( Character const & copy );
		~Character( void );

		Character&	operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
		
};

#endif