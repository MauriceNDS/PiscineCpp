/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:50:51 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 13:52:02 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat( void );
		Cat( Cat const & cpy );
		~Cat( void );

		Cat&	operator=( Cat const & rhs );

		void	makeSound ( void ) const;

};

#endif