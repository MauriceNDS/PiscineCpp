/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:01:11 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/23 12:52:34 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"


Account::Account( int initial_deposit ) {

	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << 
	this->_amount << ";created" << std::endl;

	return ;
}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << 
	this->_amount << ";closed" << std::endl;

	return ;
}

int		Account::getNbAccounts( void ) {

	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {

	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {

	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {

	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" <<
	Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits <<
	";withdrawals:" << Account::_totalNbWithdrawals << std::endl;

	return ;
}

void	Account::makeDeposit( int deposit ) {

	if ( deposit <= 0 )
		return ;
	
	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
	this->_amount - deposit << ";deposit:" << deposit << ";amount:" <<
	this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if ( withdrawal > this->_amount ) {

		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << 
		this->_amount << ";withdrawal:refused" << std::endl;
		
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
	this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" <<
	this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}

int		Account::checkAmount( void ) const {

	return this->_amount;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
	this->_nbWithdrawals << std::endl;

	return ;
}

void	Account::_displayTimestamp( void ) {

	time_t	now;
	tm		*ltm;

	now = time( 0 );
	ltm = localtime( &now );
	
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "] ";

	return ;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;