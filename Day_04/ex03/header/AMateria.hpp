/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:46:03 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 13:35:55 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:

		std::string	_type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		virtual ~AMateria( void );

		std::string const & getType( void ) const;
		
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );

};

#endif