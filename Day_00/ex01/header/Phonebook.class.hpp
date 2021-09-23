/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:40:25 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/22 15:05:23 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook {

private:

	int		_total;

public:

	Contact	contacts[8];

	Phonebook( void );
	~Phonebook( void );
	
	int		getTotal( void ) const;
	void	addContact( std::string fn, std::string ln, std::string nn, 
	std::string pn, std::string ds );

};

#endif