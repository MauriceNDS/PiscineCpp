/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:05:13 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 10:19:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource {

	private:

		AMateria*	_storage[4];
		size_t		_size;

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & copy );
		~MateriaSource( void );

		MateriaSource&	operator=( MateriaSource const & rhs );

		void			learnMateria( AMateria* m );
		AMateria*		createMateria( std::string const & type );

};

#endif