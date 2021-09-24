/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:37:55 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/24 10:10:32 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Zombie {

    private:
        string const  _name;

    public:
        Zombie( void );
        Zombie( string const str );
        ~Zombie( void );

        void    announce( void );
        
};

Zombie* newZombie( string name );
void    randomChump( string name );