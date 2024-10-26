/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:20:28 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 21:12:22 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) { 
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->value = other.value;
    return *this;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

Fixed::Fixed(const int input)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->value = input << fractional_bits;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Float Constructor called" << std::endl;
	this->value = roundf(input * (1 << fractional_bits));
}

float	Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << fractional_bits));
}

int	Fixed::toInt(void)const
{
	return (this->value >> fractional_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->value;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}