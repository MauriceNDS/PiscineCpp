/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:59:06 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 14:34:37 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Karen {

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

	public:

		void	complain( std::string level );

};