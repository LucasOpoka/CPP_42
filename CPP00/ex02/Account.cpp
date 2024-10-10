/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:08:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/10 18:06:36 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";amount:"		<< _amount
				<< ";created"		<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";amount:"		<< _amount
				<< ";closed"		<< std::endl;
}

int	Account::getNbAccounts()		{return _nbAccounts;}
int	Account::getTotalAmount()		{return _totalAmount;}
int	Account::getNbDeposits()		{return _totalNbDeposits;}
int	Account::getNbWithdrawals()		{return _totalNbWithdrawals;}
int	Account::checkAmount() const	{return _amount;}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< "accounts:"		<< _nbAccounts
				<< ";total:"		<< _totalAmount
				<< ";deposits:"		<< _totalNbDeposits
				<< ";withdrawals:"	<< _totalNbWithdrawals
				<< std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";amount:"		<< _amount
				<< ";deposits:"  	<< _nbDeposits
				<< ";withdrawals:"	<< _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";p_amount:"		<< _amount - deposit
	  			<< ";deposit:"		<< deposit
				<< ";amount:"		<< _amount
				<< ";nb_deposits:"	<< _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout	<< "index:"		<< _accountIndex
					<< ";p_amount:"	<< _amount
					<< ";withdrawal"
					<< ":refused"	<< std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout	<< "index:"			<< _accountIndex
				<< ";p_amount:"		<< _amount + withdrawal
				<< ";withdrawal:"	<< withdrawal
				<< ";amount:"		<< _amount
				<< ";nb_withdrawals:"<< _nbWithdrawals
				<< std::endl;
	return true;
}

void	Account::_displayTimestamp()
{	
	time_t	currentTime = std::time(NULL);
    char	timeStr[20];

    std::strftime(timeStr, 20, "%Y%m%d_%H%M%S",std::localtime(&currentTime));
	std::cout << "[" << timeStr << "] ";
}

