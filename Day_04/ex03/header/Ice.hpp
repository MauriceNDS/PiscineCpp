/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:05:15 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 13:37:29 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		
		Ice( void );
		Ice( Ice const & copy );
		~Ice( void );

		Ice& operator=( Ice const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif