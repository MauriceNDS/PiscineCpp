/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:56:29 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 13:37:25 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		
		Cure( void );
		Cure( Cure const & copy );
		~Cure( void );

		Cure& operator=( Cure const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif